// /Game/UI/InWorld/UMG_Inworld_GreatHunt.UMG_Inworld_GreatHunt_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Inworld_GreatHunt_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* WaveProgressAnimation;  // 0x0268, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* BorderAnimation;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_93;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ScreenImage;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScrollBox* ScrollBox_165;  // 0x0288, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<UTexture2D*> Images;  // 0x0290, size 0x10

    UFUNCTION() void ExecuteUbergraph_UMG_Inworld_GreatHunt(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Tick(FGeometry MyGeometry, float InDeltaTime);  // parameters 0x3C
};
