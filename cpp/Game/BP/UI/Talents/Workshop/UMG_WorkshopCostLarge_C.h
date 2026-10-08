// /Game/BP/UI/Talents/Workshop/UMG_WorkshopCostLarge.UMG_WorkshopCostLarge_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x294, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_WorkshopCostLarge_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Number;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FMetaCurrencyRowHandle Currency;  // 0x0278, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Amount;  // 0x0290, size 0x4

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_WorkshopCostLarge(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdateValue(int32 Amount);  // parameters 0x4
};
