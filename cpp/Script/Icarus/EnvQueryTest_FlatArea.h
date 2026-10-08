// /Script/Icarus.EnvQueryTest_FlatArea
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x2B8, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_FlatArea.h

UCLASS()
class UEnvQueryTest_FlatArea : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) float RequiredRadius;  // 0x01F8, size 0x4
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue MaxHeightChange;  // 0x0200, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ItemHeightOffset;  // 0x0238, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue DownwardsTraceDistance;  // 0x0270, size 0x38
    UPROPERTY(EditAnywhere) bool bShowDebug;  // 0x02A8, size 0x1
    UPROPERTY() TSubclassOf<UEnvQueryContext> Context;  // 0x02B0, size 0x8
};
