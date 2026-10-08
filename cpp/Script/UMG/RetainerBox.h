// /Script/UMG.RetainerBox
// Derives from: UContentWidget > UPanelWidget > UWidget > UVisual > UObject
// size 0x158, declared in Engine/Source/Runtime/UMG/Public/Components/RetainerBox.h

UCLASS()
class URetainerBox : public UContentWidget
{
public:
    UPROPERTY(EditAnywhere) bool bRetainRender;  // 0x0120, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool RenderOnInvalidation;  // 0x0121, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool RenderOnPhase;  // 0x0122, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 Phase;  // 0x0124, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) int32 PhaseCount;  // 0x0128, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) UMaterialInterface* EffectMaterial;  // 0x0130, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FName TextureParameter;  // 0x0138, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bAlsoRenderContent;  // 0x0140, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<SRetainerWidget,0> MyRetainerWidget;  // 0x0148, protected

    UFUNCTION(BlueprintCallable, BlueprintPure) UMaterialInstanceDynamic* GetEffectMaterial() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) void RequestRender();
    UFUNCTION(BlueprintCallable) void SetEffectMaterial(UMaterialInterface* EffectMaterial);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRenderingPhase(int32 RenderPhase, int32 TotalPhases);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void SetRetainRendering(bool bInRetainRendering);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetTextureParameter(FName TextureParameter);  // parameters 0x8
};
