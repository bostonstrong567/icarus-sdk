// /Game/UI/Components/UMG_MissionSelectOption.UMG_MissionSelectOption_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x320, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_MissionSelectOption_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* CategoryImage;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* Corner;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_1;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_2;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_3;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Corner_4;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UOverlay* MainOverlay;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Rewards;  // 0x02B0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FClicked Clicked;  // 0x02B8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText TitleText;  // 0x02C8, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText DescriptionText;  // 0x02E0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture2D> Soft_Texture;  // 0x02F8, size 0x28, named "Soft Texture"

    UFUNCTION(BlueprintCallable) void Clicked__DelegateSignature();
};
