// /Game/BP/Tools/CheatFunctions/Widgets/ResourceRow.ResourceRow_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UResourceRow_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced) UTextBlock* TextBlock_56;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText ResourceName;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FIcarusResourcesEnum ResourceType;  // 0x0288, size 0x10

    UFUNCTION() void ExecuteUbergraph_ResourceRow(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetResource(FIcarusResourcesEnum ResourceType);  // parameters 0x10
};
