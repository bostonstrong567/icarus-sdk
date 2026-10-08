// /Game/UI/Windows/UMG_SpaceMenu_AccoladesShowcase.UMG_SpaceMenu_AccoladesShowcase_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x3F9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_SpaceMenu_AccoladesShowcase_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* AnimateIn;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBackgroundBlur* AllAccolades;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Angle;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_1;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_2;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_3;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_4;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_5;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_6;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_7;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_8;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_9;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_10;  // 0x02D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_11;  // 0x02D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_12;  // 0x02E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_13;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_14;  // 0x02F0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_15;  // 0x02F8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_16;  // 0x0300, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_17;  // 0x0308, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_18;  // 0x0310, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_19;  // 0x0318, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_20;  // 0x0320, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_21;  // 0x0328, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_22;  // 0x0330, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_23;  // 0x0338, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_24;  // 0x0340, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_25;  // 0x0348, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_26;  // 0x0350, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_27;  // 0x0358, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_28;  // 0x0360, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_29;  // 0x0368, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_30;  // 0x0370, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_31;  // 0x0378, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_32;  // 0x0380, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_33;  // 0x0388, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_34;  // 0x0390, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_35;  // 0x0398, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_36;  // 0x03A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_37;  // 0x03A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_38;  // 0x03B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_39;  // 0x03B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_40;  // 0x03C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_41;  // 0x03C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_121;  // 0x03D0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* ShowAllButton;  // 0x03D8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_Accolades_C* UMG_Accolades;  // 0x03E0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RankBadgeProgress_C* UMG_RankBadgeProgress;  // 0x03E8, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UInventory* Inventory;  // 0x03F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Initialised;  // 0x03F8, size 0x1

    UFUNCTION() void BndEvt__UMG_SpaceMenu_AccoladesShowcase_ShowAllButton_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void Clicked__CloseButton_();  // named "Clicked (CloseButton)"
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_SpaceMenu_AccoladesShowcase(int32 EntryPoint);  // parameters 0x4
};
