// /Script/Icarus.EnvQueryTest_ProjectBox
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x228, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_ProjectBox.h

UCLASS(MinimalAPI)
class UEnvQueryTest_ProjectBox : public UEnvQueryTest
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) FEnvTraceData ProjectionData;  // 0x01F8, size 0x30
};
