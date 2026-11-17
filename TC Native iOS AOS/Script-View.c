//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

vuser_init()
{
	return 0;
}

Action()
{
	lr_start_transaction("iOS-S01-01 Laptops");
	truclient_step("1", "Select row 0 section 0 at Table (0) Table", "snapshot=Action_1.inf");
	lr_end_transaction("iOS-S01-01 Laptops",0);
	lr_start_transaction("iOS-S01-02 Product");
	truclient_step("2", "Select item 0 , section 0 at CollectionView (0) CollectionView", "snapshot=Action_2.inf");
	lr_end_transaction("iOS-S01-02 Product",0);
	lr_start_transaction("iOS-S01-03 Add To Cart");
	truclient_step("3", "Tap on ADD TO CART Button", "snapshot=Action_3.inf");
	truclient_step("4", "Tap on Ok Button", "snapshot=Action_4.inf");
	lr_end_transaction("iOS-S01-03 Add To Cart",0);
	lr_start_transaction("iOS-S01-04 Home");
	truclient_step("5", "Tap on Menu Button", "snapshot=Action_5.inf");
	truclient_step("6", "Select row 1 section 0 at Table (0) Table", "snapshot=Action_6.inf");
	lr_end_transaction("iOS-S01-04 Home",0);

	return 0;
}

vuser_end()
{
	return 0;
}
