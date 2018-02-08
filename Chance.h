#ifndef CHANCE_CARDS_H
#define CHANCE_CARDS_H

class Chance{
public:
	enum Card{
		ADVANCE_TO_GO,
		ADVANCE_TO_ILLINOIS_AVE,
		ADVANCE_TO_ST_CHARLES_PLACE,
		ADVANCE_TOKEN_TO_NEAREST_UTILITY,
		ADVANCE_TOKEN_TO_NEAREST_RAILROAD,
		BANK_PAYS_YOU_DIVIDEND_OF_50,
		GET_OUT_OF_JAIL_FREE,
		GO_BACK_3_SPACES,
		GO_TO_JAIL,
		MAKE_GENERAL_REPAIRS_ON_ALL_YOUR_PROPERTY,
		PAY_POOR_TAX,
		TAKE_A_TRIP_TO_READING_RAILROAD,
		TAKE_A_WALK_ON_THE_BOARDWALK,
		YOU_HAVE_BEEN_ELECTED_CHAIRMAN_OF_THE_BOARD,
		YOUR_BUILDING_LOAN_MATURES,
		YOU_HAVE_WON_A_CROSSWORD_COMPETITION,

		NUM_CARDS,
	};
	static const char* GetCardName(Card card);
private:
	static const char* card_name[NUM_CARDS];
};

#endif