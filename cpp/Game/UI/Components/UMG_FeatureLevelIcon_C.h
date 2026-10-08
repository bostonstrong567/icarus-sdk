// /Game/UI/Components/UMG_FeatureLevelIcon.UMG_FeatureLevelIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x274, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FeatureLevelIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float IconSize;  // 0x0270, size 0x4

    UFUNCTION() void ExecuteUbergraph_UMG_FeatureLevelIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetFeatureLevel(FFeatureLevelsRowHandle FeatureLevel);  // parameters 0x18
};
