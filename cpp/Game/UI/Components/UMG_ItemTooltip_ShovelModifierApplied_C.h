// /Game/UI/Components/UMG_ItemTooltip_ShovelModifierApplied.UMG_ItemTooltip_ShovelModifierApplied_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x468, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ItemTooltip_ShovelModifierApplied_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_ModifierDescription_C* UMG_ModifierDescription;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CropTier;  // 0x0270, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FItemData Item;  // 0x0278, size 0x1F0

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_ItemTooltip_ShovelModifierApplied(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseMatchingModifier();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
};
