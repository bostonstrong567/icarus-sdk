// /Script/Niagara.NiagaraRibbonRendererProperties
// Derives from: UNiagaraRendererProperties > UNiagaraMergeable > UObject
// size 0x860, declared in Engine/Plugins/FX/Niagara/Source/Niagara/Public/NiagaraRibbonRendererProperties.h

UCLASS(EditInlineNew)
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
    UPROPERTY(EditAnywhere) UMaterialInterface* Material;  // 0x0078, size 0x8
    UPROPERTY(EditAnywhere) FNiagaraUserParameterBinding MaterialUserParamBinding;  // 0x0080, size 0x20
    UPROPERTY(EditAnywhere) ENiagaraRibbonFacingMode FacingMode;  // 0x00A0, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraRibbonUVSettings UV0Settings;  // 0x00A4, size 0x24
    UPROPERTY(EditAnywhere) FNiagaraRibbonUVSettings UV1Settings;  // 0x00C8, size 0x24
    UPROPERTY(EditAnywhere) ENiagaraRibbonDrawDirection DrawDirection;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere) ENiagaraRibbonShapeMode Shape;  // 0x00ED, size 0x1
    UPROPERTY(EditAnywhere) bool bEnableAccurateGeometry;  // 0x00EE, size 0x1
    UPROPERTY(EditAnywhere) int32 WidthSegmentationCount;  // 0x00F0, size 0x4
    UPROPERTY(EditAnywhere) int32 MultiPlaneCount;  // 0x00F4, size 0x4
    UPROPERTY(EditAnywhere) int32 TubeSubdivisions;  // 0x00F8, size 0x4
    UPROPERTY(EditAnywhere) TArray<FNiagaraRibbonShapeCustomVertex> CustomVertices;  // 0x0100, size 0x10
    UPROPERTY(EditAnywhere) float CurveTension;  // 0x0110, size 0x4
    UPROPERTY(EditAnywhere) ENiagaraRibbonTessellationMode TessellationMode;  // 0x0114, size 0x1
    UPROPERTY(EditAnywhere) int32 TessellationFactor;  // 0x0118, size 0x4
    UPROPERTY(EditAnywhere) bool bUseConstantFactor;  // 0x011C, size 0x1
    UPROPERTY(EditAnywhere) float TessellationAngle;  // 0x0120, size 0x4
    UPROPERTY(EditAnywhere) bool bScreenSpaceTessellation;  // 0x0124, size 0x1
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding PositionBinding;  // 0x0128, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding ColorBinding;  // 0x0180, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding VelocityBinding;  // 0x01D8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding NormalizedAgeBinding;  // 0x0230, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonTwistBinding;  // 0x0288, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonWidthBinding;  // 0x02E0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonFacingBinding;  // 0x0338, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonIdBinding;  // 0x0390, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonLinkOrderBinding;  // 0x03E8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding MaterialRandomBinding;  // 0x0440, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterialBinding;  // 0x0498, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial1Binding;  // 0x04F0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial2Binding;  // 0x0548, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding DynamicMaterial3Binding;  // 0x05A0, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding RibbonUVDistance;  // 0x05F8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding U0OverrideBinding;  // 0x0650, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding V0RangeOverrideBinding;  // 0x06A8, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding U1OverrideBinding;  // 0x0700, size 0x58
    UPROPERTY(EditAnywhere) FNiagaraVariableAttributeBinding V1RangeOverrideBinding;  // 0x0758, size 0x58
    UPROPERTY(EditAnywhere) TArray<FNiagaraMaterialAttributeBinding> MaterialParameterBindings;  // 0x07B0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bSortKeyDataSetAccessorIsAge;  // 0x07C0
    FNiagaraDataSetAccessor<float> SortKeyDataSetAccessor;  // 0x07C4
    FNiagaraDataSetAccessor<FVector> PositionDataSetAccessor;  // 0x07CC
    FNiagaraDataSetAccessor<float> NormalizedAgeAccessor;  // 0x07D4
    FNiagaraDataSetAccessor<float> SizeDataSetAccessor;  // 0x07DC
    FNiagaraDataSetAccessor<float> TwistDataSetAccessor;  // 0x07E4
    FNiagaraDataSetAccessor<FVector> FacingDataSetAccessor;  // 0x07EC
    FNiagaraDataSetAccessor<FVector4> MaterialParam0DataSetAccessor;  // 0x07F4
    FNiagaraDataSetAccessor<FVector4> MaterialParam1DataSetAccessor;  // 0x07FC
    FNiagaraDataSetAccessor<FVector4> MaterialParam2DataSetAccessor;  // 0x0804
    FNiagaraDataSetAccessor<FVector4> MaterialParam3DataSetAccessor;  // 0x080C
    bool DistanceFromStartIsBound;  // 0x0814
    bool U0OverrideIsBound;  // 0x0815
    bool U1OverrideIsBound;  // 0x0816
    FNiagaraDataSetAccessor<int> RibbonIdDataSetAccessor;  // 0x0818
    FNiagaraDataSetAccessor<FNiagaraID> RibbonFullIDDataSetAccessor;  // 0x081C
    uint32 MaterialParamValidMask;  // 0x0828
    FNiagaraRendererLayout RendererLayout;  // 0x0830
};
