// /Script/Niagara.NiagaraMeshRendererProperties
// Derives from: UNiagaraRendererProperties > UNiagaraMergeable > UObject
// size 0x898, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraMeshRendererProperties.h

UCLASS(EditInlineNew)
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
    UPROPERTY(EditAnywhere) TArray<FNiagaraMeshRendererMeshProperties> Meshes;  // 0x0078, size 0x10
    UPROPERTY(EditAnywhere) ENiagaraRendererSourceDataMode SourceMode;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraSortMode SortMode;  // 0x0089, size 0x1
    UPROPERTY(EditAnywhere) uint8 bOverrideMaterials : 1;  // 0x008C, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bSortOnlyWhenTranslucent : 1;  // 0x008C, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bGpuLowLatencyTranslucency : 1;  // 0x008C, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bSubImageBlend : 1;  // 0x008C, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bEnableFrustumCulling : 1;  // 0x008C, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bEnableCameraDistanceCulling : 1;  // 0x008C, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bEnableMeshFlipbook : 1;  // 0x008C, mask 0x40
    UPROPERTY(EditAnywhere) TArray<FNiagaraMeshMaterialOverride> OverrideMaterials;  // 0x0090, size 0x10
    UPROPERTY(EditAnywhere) FVector2D SubImageSize;  // 0x00A0, size 0x8
    UPROPERTY(EditAnywhere) ENiagaraMeshFacingMode FacingMode;  // 0x00A8, size 0x1
    UPROPERTY(EditAnywhere) uint8 bLockedAxisEnable : 1;  // 0x00AC, mask 0x01
    UPROPERTY(EditAnywhere) FVector LockedAxis;  // 0x00B0, size 0xC
    UPROPERTY(EditAnywhere) ENiagaraMeshLockedAxisSpace LockedAxisSpace;  // 0x00BC, size 0x1
    UPROPERTY(EditAnywhere) float MinCameraDistance;  // 0x00C0, size 0x4
    UPROPERTY(EditAnywhere) float MaxCameraDistance;  // 0x00C4, size 0x4
    UPROPERTY(EditAnywhere) uint32 RendererVisibility;  // 0x00C8, size 0x4
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding PositionBinding;  // 0x00D0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding ColorBinding;  // 0x0128, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding VelocityBinding;  // 0x0180, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding MeshOrientationBinding;  // 0x01D8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding ScaleBinding;  // 0x0230, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding SubImageIndexBinding;  // 0x0288, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x02E0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x0338, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x0390, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x03E8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x0440, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding CustomSortingBinding;  // 0x0498, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x04F0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding CameraOffsetBinding;  // 0x0548, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RendererVisibilityTagBinding;  // 0x05A0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding MeshIndexBinding;  // 0x05F8, size 0x58
    UPROPERTY(EditAnywhere) TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x0650, size 0x10
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevPositionBinding;  // 0x0660, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevScaleBinding;  // 0x06B8, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevMeshOrientationBinding;  // 0x0710, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevCameraOffsetBinding;  // 0x0768, size 0x58
    UPROPERTY(Transient) FNiagaraVariableAttributeBinding PrevVelocityBinding;  // 0x07C0, size 0x58
    UPROPERTY(Deprecated) UStaticMesh* ParticleMesh;  // 0x0880, size 0x8
    UPROPERTY(Deprecated) FVector PivotOffset;  // 0x0888, size 0xC
    UPROPERTY(Deprecated) ENiagaraMeshPivotOffsetSpace PivotOffsetSpace;  // 0x0894, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    uint32 MaterialParamValidMask;  // 0x0818
    FNiagaraRendererLayout RendererLayoutWithCustomSorting;  // 0x0820
    FNiagaraRendererLayout RendererLayoutWithoutCustomSorting;  // 0x0850
};
