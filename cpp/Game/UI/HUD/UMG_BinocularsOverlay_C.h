// /Game/UI/HUD/UMG_BinocularsOverlay.UMG_BinocularsOverlay_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2A0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_BinocularsOverlay_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Image_Overlay;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSoftObjectPtr<UTexture> LastOverlay;  // 0x0270, size 0x28
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UMaterialInstanceDynamic* DynamicMaterial;  // 0x0298, size 0x8

    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_BinocularsOverlay(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InnerSetScopeOverlay(FFirearmScopeDataRowHandle ScopeRow);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OnLoaded_199834114403C52AC88EA695E379BCA9(UObject* Loaded);  // parameters 0x8
};
