// /Script/AIModule.EnvQueryTest
// Derives from: UEnvQueryNode > UObject
// size 0x1F8, declared in Engine/Source/Runtime/AIModule/Classes/EnvironmentQuery/EnvQueryTest.h

UCLASS(Abstract, MinimalAPI)
class UEnvQueryTest : public UEnvQueryNode
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY() int32 TestOrder;  // 0x0030, size 0x4
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestPurpose> TestPurpose;  // 0x0034, size 0x1
    UPROPERTY(EditAnywhere) FString TestComment;  // 0x0038, size 0x10
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestFilterOperator> MultipleContextFilterOp;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestScoreOperator> MultipleContextScoreOp;  // 0x0049, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestFilterType> FilterType;  // 0x004A, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderBoolValue BoolValue;  // 0x0050, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue FloatValueMin;  // 0x0088, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue FloatValueMax;  // 0x00C0, size 0x38
    TEnumAsByte<enum EEnvTestCost::Type> Cost;  // 0x00F8, not reflected
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvTestScoreEquation> ScoringEquation;  // 0x00F9, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryTestClamping> ClampMinType;  // 0x00FA, size 0x1
    UPROPERTY(EditAnywhere) TEnumAsByte<EEnvQueryTestClamping> ClampMaxType;  // 0x00FB, size 0x1
    UPROPERTY(EditAnywhere) EEQSNormalizationType NormalizationType;  // 0x00FC, size 0x1
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ScoreClampMin;  // 0x0100, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ScoreClampMax;  // 0x0138, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ScoringFactor;  // 0x0170, size 0x38
    UPROPERTY(EditAnywhere) FAIDataProviderFloatValue ReferenceValue;  // 0x01A8, size 0x38
    UPROPERTY(EditAnywhere) bool bDefineReferenceValue;  // 0x01E0, size 0x1
    TSubclassOf<UEnvQueryItemType> ValidItemType;  // 0x01E8, not reflected
private:
    UPROPERTY() uint8 bWorkOnFloatValues : 1;  // 0x01F0, mask 0x01

    // Virtual functions that start here:
    //   RunTest
};
