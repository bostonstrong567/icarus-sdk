// /Game/UI/HUD/UMG_ExpRewardLarge.UMG_ExpRewardLarge_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x274, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ExpRewardLarge_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Number;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0270, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ExpRewardLarge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateValue(int32 Amount);  // parameters 0x4
};
