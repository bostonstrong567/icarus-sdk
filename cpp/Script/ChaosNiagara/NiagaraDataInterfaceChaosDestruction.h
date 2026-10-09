// /Script/ChaosNiagara.NiagaraDataInterfaceChaosDestruction
// Derives from: UNiagaraDataInterface > UNiagaraDataInterfaceBase > UNiagaraMergeable > UObject
// size 0x238, declared in Engine/Plugins/Experimental/ChaosNiagara/Source/ChaosNiagara/Classes/NiagaraDataInterfaceChaosDestruction.h

UCLASS(EditInlineNew)
class UNiagaraDataInterfaceChaosDestruction : public UNiagaraDataInterface
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) TSet<AChaosSolverActor*> ChaosSolverActorSet;  // 0x0038, size 0x50
    UPROPERTY(EditAnywhere) EDataSourceTypeEnum DataSourceType;  // 0x0088, size 0x1
    UPROPERTY(EditAnywhere) int32 DataProcessFrequency;  // 0x008C, size 0x4
    UPROPERTY(EditAnywhere) int32 MaxNumberOfDataEntriesToSpawn;  // 0x0090, size 0x4
    UPROPERTY(EditAnywhere) bool DoSpawn;  // 0x0094, size 0x1
    UPROPERTY(EditAnywhere) FVector2D SpawnMultiplierMinMax;  // 0x0098, size 0x8
    UPROPERTY(EditAnywhere) float SpawnChance;  // 0x00A0, size 0x4
    UPROPERTY(EditAnywhere) FVector2D ImpulseToSpawnMinMax;  // 0x00A4, size 0x8
    UPROPERTY(EditAnywhere) FVector2D SpeedToSpawnMinMax;  // 0x00AC, size 0x8
    UPROPERTY(EditAnywhere) FVector2D MassToSpawnMinMax;  // 0x00B4, size 0x8
    UPROPERTY(EditAnywhere) FVector2D ExtentMinToSpawnMinMax;  // 0x00BC, size 0x8
    UPROPERTY(EditAnywhere) FVector2D ExtentMaxToSpawnMinMax;  // 0x00C4, size 0x8
    UPROPERTY(EditAnywhere) FVector2D VolumeToSpawnMinMax;  // 0x00CC, size 0x8
    UPROPERTY(EditAnywhere) FVector2D SolverTimeToSpawnMinMax;  // 0x00D4, size 0x8
    UPROPERTY(EditAnywhere) int32 SurfaceTypeToSpawn;  // 0x00DC, size 0x4
    UPROPERTY(EditAnywhere) ELocationFilteringModeEnum LocationFilteringMode;  // 0x00E0, size 0x1
    UPROPERTY(EditAnywhere) ELocationXToSpawnEnum LocationXToSpawn;  // 0x00E1, size 0x1
    UPROPERTY(EditAnywhere) FVector2D LocationXToSpawnMinMax;  // 0x00E4, size 0x8
    UPROPERTY(EditAnywhere) ELocationYToSpawnEnum LocationYToSpawn;  // 0x00EC, size 0x1
    UPROPERTY(EditAnywhere) FVector2D LocationYToSpawnMinMax;  // 0x00F0, size 0x8
    UPROPERTY(EditAnywhere) ELocationZToSpawnEnum LocationZToSpawn;  // 0x00F8, size 0x1
    UPROPERTY(EditAnywhere) FVector2D LocationZToSpawnMinMax;  // 0x00FC, size 0x8
    UPROPERTY(EditAnywhere) EDataSortTypeEnum DataSortingType;  // 0x0104, size 0x1
    UPROPERTY(EditAnywhere) bool bGetExternalCollisionData;  // 0x0105, size 0x1
    UPROPERTY(EditAnywhere) bool DoSpatialHash;  // 0x0106, size 0x1
    UPROPERTY(EditAnywhere) FVector SpatialHashVolumeMin;  // 0x0108, size 0xC
    UPROPERTY(EditAnywhere) FVector SpatialHashVolumeMax;  // 0x0114, size 0xC
    UPROPERTY(EditAnywhere) FVector SpatialHashVolumeCellSize;  // 0x0120, size 0xC
    UPROPERTY(EditAnywhere) int32 MaxDataPerCell;  // 0x012C, size 0x4
    UPROPERTY(EditAnywhere) bool bApplyMaterialsFilter;  // 0x0130, size 0x1
    UPROPERTY(EditAnywhere) TSet<UPhysicalMaterial*> ChaosBreakingMaterialSet;  // 0x0138, size 0x50
    UPROPERTY(EditAnywhere) bool bGetExternalBreakingData;  // 0x0188, size 0x1
    UPROPERTY(EditAnywhere) bool bGetExternalTrailingData;  // 0x0189, size 0x1
    UPROPERTY(EditAnywhere) FVector2D RandomPositionMagnitudeMinMax;  // 0x018C, size 0x8
    UPROPERTY(EditAnywhere) float InheritedVelocityMultiplier;  // 0x0194, size 0x4
    UPROPERTY(EditAnywhere) ERandomVelocityGenerationTypeEnum RandomVelocityGenerationType;  // 0x0198, size 0x1
    UPROPERTY(EditAnywhere) FVector2D RandomVelocityMagnitudeMinMax;  // 0x019C, size 0x8
    UPROPERTY(EditAnywhere) float SpreadAngleMax;  // 0x01A4, size 0x4
    UPROPERTY(EditAnywhere) FVector VelocityOffsetMin;  // 0x01A8, size 0xC
    UPROPERTY(EditAnywhere) FVector VelocityOffsetMax;  // 0x01B4, size 0xC
    UPROPERTY(EditAnywhere) FVector2D FinalVelocityMagnitudeMinMax;  // 0x01C0, size 0x8
    UPROPERTY(EditAnywhere) float MaxLatency;  // 0x01C8, size 0x4
    UPROPERTY(EditAnywhere) EDebugTypeEnum DebugType;  // 0x01CC, size 0x1
protected:
    UPROPERTY() int32 LastSpawnedPointID;  // 0x01D0, size 0x4
    UPROPERTY() float LastSpawnTime;  // 0x01D4, size 0x4
    TArray<FVector,TSizedDefaultAllocator<32> > ColorArray;  // 0x01D8, not reflected
    UPROPERTY() float SolverTime;  // 0x01E8, size 0x4
    UPROPERTY() float TimeStampOfLastProcessedData;  // 0x01EC, size 0x4
    bool ShouldSpawn;  // 0x01F0, not reflected
    TArray<FSolverData,TSizedDefaultAllocator<32> > Solvers;  // 0x01F8, not reflected
    TArray<Chaos::FCollidingDataExt,TSizedDefaultAllocator<32> > CollisionEvents;  // 0x0208, not reflected
    TArray<Chaos::FBreakingDataExt,TSizedDefaultAllocator<32> > BreakingEvents;  // 0x0218, not reflected
    TArray<Chaos::FTrailingDataExt,TSizedDefaultAllocator<32> > TrailingEvents;  // 0x0228, not reflected
};
