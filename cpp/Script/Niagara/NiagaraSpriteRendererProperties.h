// /Script/Niagara.NiagaraSpriteRendererProperties
// Derives from: UNiagaraRendererProperties > UNiagaraMergeable > UObject
// size 0xAB0, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraSpriteRendererProperties.h

UCLASS(EditInlineNew)
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraRendererSourceDataMode SourceMode;  // 0x0080, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0x0088, size 0x20
    UPROPERTY(EditAnywhere) ENiagaraSpriteAlignment Alignment;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraSpriteFacingMode FacingMode;  // 0x00A9, size 0x1
    UPROPERTY(EditAnywhere) FVector2D PivotInUVSpace;  // 0x00AC, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraSortMode SortMode;  // 0x00B4, size 0x1
    UPROPERTY(EditAnywhere) FVector2D SubImageSize;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) uint8 bSubImageBlend : 1;  // 0x00C0, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bRemoveHMDRollInVR : 1;  // 0x00C0, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSortOnlyWhenTranslucent : 1;  // 0x00C0, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bGpuLowLatencyTranslucency : 1;  // 0x00C0, mask 0x08
    UPROPERTY(EditAnywhere) float MinFacingCameraBlendDistance;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere) float MaxFacingCameraBlendDistance;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) uint8 bEnableCameraDistanceCulling : 1;  // 0x00CC, mask 0x01
    UPROPERTY(EditAnywhere) float MinCameraDistance;  // 0x00D0, size 0x4
    UPROPERTY(EditAnywhere) float MaxCameraDistance;  // 0x00D4, size 0x4
    UPROPERTY(EditAnywhere) uint32 RendererVisibility;  // 0x00D8, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding PositionBinding;  // 0x00E0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding ColorBinding;  // 0x0138, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding VelocityBinding;  // 0x0190, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SpriteRotationBinding;  // 0x01E8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SpriteSizeBinding;  // 0x0240, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SpriteFacingBinding;  // 0x0298, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SpriteAlignmentBinding;  // 0x02F0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x0348, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x03A0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x03F8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x0450, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x04A8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x0500, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding UVScaleBinding;  // 0x0558, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding PivotOffsetBinding;  // 0x05B0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x0608, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x0660, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x06B8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x0710, size 0x58
    UPROPERTY(EditAnywhere) TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x0768, size 0x10
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x0778, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x07D0, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevSpriteRotationBinding;  // 0x0828, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevSpriteSizeBinding;  // 0x0880, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevSpriteFacingBinding;  // 0x08D8, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevSpriteAlignmentBinding;  // 0x0930, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0x0988, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevPivotOffsetBinding;  // 0x09E0, size 0x58
    FNiagaraRendererLayout RendererLayoutWithCustomSort;  // 0x0A38, not reflected
    FNiagaraRendererLayout RendererLayoutWithoutCustomSort;  // 0x0A68, not reflected
    uint32 MaterialParamValidMask;  // 0x0A98, not reflected
private:
    FSubUVDerivedData DerivedData;  // 0x0AA0, not reflected
};
