// /Game/UI/Popups/UMG_BestiaryExperience.UMG_BestiaryExperience_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BestiaryExperience_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FBestiaryDataRowHandle BestiaryGroup;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BestiaryProgress;  // 0x0290, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 BestiaryMaxProgress;  // 0x0294, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BestiaryExperience(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Remove();
    UFUNCTION(BlueprintCallable) void UpdateBeastAmount(int32 AdditionalXP);  // parameters 0x4
};
