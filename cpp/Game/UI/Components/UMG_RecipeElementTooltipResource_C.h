// /Game/UI/Components/UMG_RecipeElementTooltipResource.UMG_RecipeElementTooltipResource_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeElementTooltipResource_C : public UUserWidget
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* State;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_RecipeInputResource_C* UMG_RecipeInputResource;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* LinkedActor;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCallable) void Update(TEnumAsByte<ProcessorPreview> PreviewState, FIcarusResourcesEnum ResourceType, int32 CurrentAmount, int32 RecipeMultiplier, bool Output);  // parameters 0x21
};
