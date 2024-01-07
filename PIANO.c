

#include "LIB/STD_TYPES.h"
#include "LIB/BIT_MATH.h"

#include "MCAL/DIO/DIO_interface.h"
#include "MCAL/GIE/GIE_interface.h"
#include "HAL/KPD/KPAD_interface.h"

#include "MCAL/TIMERS/TIMERS_interface.h"
#include "HAL/CLCD/CLCD_interface.h"
#include <util/delay.h>


//volatile u8 B = 0;
//volatile u8 F = 0;

//void app_overflow (void) ;
//void app_ctc (void)	;

int main(void)
{
	KPAD_voidInit();
	u8 KpValue = KPAD_notpressed ;



//	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN0 , DIO_INPUT);
//	DIO_voidSetPinValue(DIO_PORTB , DIO_PIN1 , DIO_HIGH );


//	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN1 , DIO_OUTPUT);
//	DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN2 , DIO_OUTPUT);

		DIO_voidSetPinDirection(DIO_PORTB , DIO_PIN3 , DIO_OUTPUT);

	TIMERS_voidT0Init();
//	TIMERS_voidSetPreloadValT0( 192 ) ;

//	TIMERS_voidSetPreloadValT0( 254) ;



//	GIE_voidEnable();

	CLCD_voidInit() ;

//	TIMERS_T0SetCallBack(TIMER0_CTC,&app_ctc) ;

//
//	   {'7','8','9','+'}, //Row 0
//	                            {'4','5','6','-'}, //Row 1
//	                            {'1','2' , '3' , '/'}, //Row 2
//	                            {'.','0','C','='}  //Row 3
//	                            };

	while(1)
	{
		KpValue = KPAD_notpressed ;
		while (KpValue == KPAD_notpressed)
		{
			KpValue = KPAD_u8GetPressed();

		}

		switch (KpValue)
		{
		case '7' :
			TIMERS_voidSetComapreMatchValueT0( 100 );
			_delay_ms(200)	;
			break ;

		case '8' :
			TIMERS_voidSetComapreMatchValueT0( 110 );
			_delay_ms(200)	;
			break ;

		case '9' :
			TIMERS_voidSetComapreMatchValueT0( 120 );
			_delay_ms(200)	;
			break ;
		case '+' :
			TIMERS_voidSetComapreMatchValueT0( 130 );
			_delay_ms(200)	;
			break ;

		case '4' :
			TIMERS_voidSetComapreMatchValueT0( 140 );
			_delay_ms(200)	;
			break ;

		case '5' :
			TIMERS_voidSetComapreMatchValueT0( 150 );
			_delay_ms(200)	;
			break ;


		case '6' :
			TIMERS_voidSetComapreMatchValueT0( 160 );
			_delay_ms(200)	;
			break ;

		case '-' :
			TIMERS_voidSetComapreMatchValueT0( 170 );
			_delay_ms(200)	;
			break ;

		case '1' :
			TIMERS_voidSetComapreMatchValueT0( 180 );
			_delay_ms(200)	;
			break ;


		case '2' :
			TIMERS_voidSetComapreMatchValueT0( 190 );
			_delay_ms(200)	;
			break ;

		case '3' :
			TIMERS_voidSetComapreMatchValueT0( 200 );
			_delay_ms(200)	;
			break ;

		case '/' :
			TIMERS_voidSetComapreMatchValueT0( 210 );
			_delay_ms(200)	;
			break ;


		case '.' :
			TIMERS_voidSetComapreMatchValueT0( 220 );
			_delay_ms(200)	;
			break ;


		case '0' :
			TIMERS_voidSetComapreMatchValueT0( 230 );
			_delay_ms(200)	;
			break ;


		case 'C' :
			TIMERS_voidSetComapreMatchValueT0( 240 );
			_delay_ms(200)	;
			break ;


		case '=' :
			TIMERS_voidSetComapreMatchValueT0( 250 );
			_delay_ms(200)	;
			break ;

		default :
			break ;

		}

		TIMERS_voidSetComapreMatchValueT0( 0 );



//
//
//		TIMERS_voidSetComapreMatchValueT0( 150 );
//		_delay_ms(1000)	;
//
//		TIMERS_voidSetComapreMatchValueT0( 200 );
//		_delay_ms(1000)	;


		//
//		if (F != 0)
//		{
//			CLCD_voidCLearDisplay() ;
//			CLCD_voidSendNumber(B) ;
//			F = 0 ;
//		}


//		DIO_voidSetPinValue(DIO_PORTB , DIO_PIN1 , DIO_HIGH);
//		_delay_ms(1000);
//		DIO_voidSetPinValue(DIO_PORTB , DIO_PIN1 , DIO_LOW);
//		_delay_ms(1000);

	}
	return 0 ;
}
//

//void app_overflow (void)
//
//{
////	static u16 counter = 0 ;
////	counter ++;
////	if(counter == 3907)
////	{
//		// Tog Led
//		u8 static Local_u8State = 0 ;
//		TOG_BIT(Local_u8State , 0 );
//		DIO_voidSetPinValue(DIO_PORTB , DIO_PIN1 , Local_u8State );
//
//		B++ ;
//		F++ ;
//		// CLear Counter
////		counter = 0 ;
//		// set preload value
//		//	TIMERS_voidSetPreloadValT0( 192 ) ;
//
//		TIMERS_voidSetPreloadValT0(254);
////	}
//}


//void app_ctc (void)
//{
////	static u16 counter = 0 ;
////	counter ++;
////	if(counter == 5000)
//	{
//		// Tog Led
//		u8 static Local_u8State = 0 ;
//		TOG_BIT(Local_u8State , 0 );
//		DIO_voidSetPinValue(DIO_PORTB , DIO_PIN2 , Local_u8State );
//		B++ ;
//		F++ ;
//
//		// CLear Counter
////		counter = 0 ;
//
//
//	}
//}
