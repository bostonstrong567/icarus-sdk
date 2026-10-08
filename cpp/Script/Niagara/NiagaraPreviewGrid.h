// /Script/Niagara.NiagaraPreviewGrid
// Derives from: AActor > UObject
// size 0x270, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraPreviewGrid.h

UCLASS(Config=Engine)
class ANiagaraPreviewGrid : public AActor
{
public:
    UPROPERTY(EditAnywhere) UNiagaraSystem* System;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraPreviewGridResetMode ResetMode;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, Instanced) UNiagaraPreviewAxis* PreviewAxisX;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Instanced) UNiagaraPreviewAxis* PreviewAxisY;  // 0x0238, size 0x8
    UPROPERTY(EditAnywhere) TSubclassOf<ANiagaraPreviewBase> PreviewClass;  // 0x0240, size 0x8
    UPROPERTY(EditAnywhere) float SpacingX;  // 0x0248, size 0x4
    UPROPERTY(EditAnywhere) float SpacingY;  // 0x024C, size 0x4
    UPROPERTY(Transient) int32 NumX;  // 0x0250, size 0x4
    UPROPERTY(Transient) int32 NumY;  // 0x0254, size 0x4
    UPROPERTY(Transient) TArray<UChildActorComponent*> PreviewComponents;  // 0x0258, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    uint32 : 1 bPreviewDirty;  // 0x0268, private
    uint32 : 1 bPreviewActive;  // 0x0268, private

    UFUNCTION(BlueprintCallable) void ActivatePreviews(bool bReset);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void DeactivatePreviews();
    UFUNCTION(BlueprintCallable) void GetPreviews(TArray<UNiagaraComponent*>& OutPreviews);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void SetPaused(bool bPaused);  // parameters 0x1
};
