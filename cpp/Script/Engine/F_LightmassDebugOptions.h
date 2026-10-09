// /Script/Engine.LightmassDebugOptions
// size 0x10, declared in Engine/Source/Runtime/Engine/Classes/Engine/EngineTypes.h

USTRUCT()
struct FLightmassDebugOptions
{
public:
    UPROPERTY(EditAnywhere) uint8 bDebugMode : 1;  // 0x0000, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bStatsEnabled : 1;  // 0x0000, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bGatherBSPSurfacesAcrossComponents : 1;  // 0x0000, mask 0x04
    UPROPERTY(EditAnywhere) float CoplanarTolerance;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere) uint8 bUseImmediateImport : 1;  // 0x0008, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bImmediateProcessMappings : 1;  // 0x0008, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bSortMappings : 1;  // 0x0008, mask 0x04
    UPROPERTY(EditAnywhere) uint8 bDumpBinaryFiles : 1;  // 0x0008, mask 0x08
    UPROPERTY(EditAnywhere) uint8 bDebugMaterials : 1;  // 0x0008, mask 0x10
    UPROPERTY(EditAnywhere) uint8 bPadMappings : 1;  // 0x0008, mask 0x20
    UPROPERTY(EditAnywhere) uint8 bDebugPaddings : 1;  // 0x0008, mask 0x40
    UPROPERTY(EditAnywhere) uint8 bOnlyCalcDebugTexelMappings : 1;  // 0x0008, mask 0x80
    UPROPERTY(EditAnywhere) uint8 bUseRandomColors : 1;  // 0x0009, mask 0x01
    UPROPERTY(EditAnywhere) uint8 bColorBordersGreen : 1;  // 0x0009, mask 0x02
    UPROPERTY(EditAnywhere) uint8 bColorByExecutionTime : 1;  // 0x0009, mask 0x04
    UPROPERTY(EditAnywhere) float ExecutionTimeDivisor;  // 0x000C, size 0x4
};
