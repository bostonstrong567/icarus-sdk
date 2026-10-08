// /Script/Engine.ParticleModuleTypeDataBeam2
// Derives from: UParticleModuleTypeDataBase > UParticleModule > UObject
// size 0x150, declared in Engine/Source/Runtime/Engine/Classes/Particles/TypeData/ParticleModuleTypeDataBeam2.h

UCLASS(EditInlineNew, MinimalAPI)
class UParticleModuleTypeDataBeam2 : public UParticleModuleTypeDataBase
{
public:
    UPROPERTY(EditAnywhere) TEnumAsByte<EBeam2Method> BeamMethod;  // 0x0030, size 0x1
    UPROPERTY(EditAnywhere) int32 TextureTile;  // 0x0034, size 0x4
    UPROPERTY(EditAnywhere) float TextureTileDistance;  // 0x0038, size 0x4
    UPROPERTY(EditAnywhere) int32 Sheets;  // 0x003C, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxBeamCount;  // 0x0040, size 0x4
    UPROPERTY(EditAnywhere) float Speed;  // 0x0044, size 0x4
    UPROPERTY(EditAnywhere) int32 InterpolationPoints;  // 0x0048, size 0x4
    UPROPERTY(EditAnywhere) uint8 bAlwaysOn : 1;  // 0x004C, mask 0x01
    UPROPERTY(EditAnywhere) int32 UpVectorStepSize;  // 0x0050, size 0x4
    UPROPERTY(EditAnywhere) FName BranchParentName;  // 0x0054, size 0x8
    UPROPERTY(EditAnywhere) FRawDistributionFloat Distance;  // 0x0060, size 0x30
    UPROPERTY(EditAnywhere) TEnumAsByte<EBeamTaperMethod> TaperMethod;  // 0x0090, size 0x1
    UPROPERTY(EditAnywhere) FRawDistributionFloat TaperFactor;  // 0x0098, size 0x30
    UPROPERTY(EditAnywhere) FRawDistributionFloat TaperScale;  // 0x00C8, size 0x30
    UPROPERTY(EditAnywhere) uint8 RenderGeometry : 1;  // 0x00F8, mask 0x01
    UPROPERTY(EditAnywhere) uint8 RenderDirectLine : 1;  // 0x00F8, mask 0x02
    UPROPERTY(EditAnywhere) uint8 RenderLines : 1;  // 0x00F8, mask 0x04
    UPROPERTY(EditAnywhere) uint8 RenderTessellation : 1;  // 0x00F8, mask 0x08

    // Not reflected: the engine's scripting cannot see these.
    TArray<UParticleModuleBeamSource *,TSizedDefaultAllocator<32> > LOD_BeamModule_Source;  // 0x0100
    TArray<UParticleModuleBeamTarget *,TSizedDefaultAllocator<32> > LOD_BeamModule_Target;  // 0x0110
    TArray<UParticleModuleBeamNoise *,TSizedDefaultAllocator<32> > LOD_BeamModule_Noise;  // 0x0120
    TArray<UParticleModuleBeamModifier *,TSizedDefaultAllocator<32> > LOD_BeamModule_SourceModifier;  // 0x0130
    TArray<UParticleModuleBeamModifier *,TSizedDefaultAllocator<32> > LOD_BeamModule_TargetModifier;  // 0x0140

    // Virtual functions that start here:
    //   GetDataPointerOffsets, GetDataPointers
};
