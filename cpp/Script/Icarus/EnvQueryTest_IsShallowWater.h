// /Script/Icarus.EnvQueryTest_IsShallowWater
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x2E0, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_IsShallowWater.h

UCLASS()
class UEnvQueryTest_IsShallowWater : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) FEnvTraceData TraceData;  // 0x01F8, size 0x30
    UPROPERTY(EditAnywhere) TEnumAsByte<ECollisionChannel> WaterChannel;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue PermitWaterDepthCm;  // 0x0230, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue UpwardsTraceDistance;  // 0x0268, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ItemHeightOffset;  // 0x02A0, size 0x38
    UPROPERTY() TSubclassOf<UEnvQueryContext> Context;  // 0x02D8, size 0x8
};
