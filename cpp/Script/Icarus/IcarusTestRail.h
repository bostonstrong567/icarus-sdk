// /Script/Icarus.IcarusTestRail
// Derives from: ACameraRig_Rail > AActor > UObject
// size 0x2D8, declared in Icarus/Source/Icarus/AutomatedTesting/IcarusTestRail.h

UCLASS(MinimalAPI, Config=Engine)
class AIcarusTestRail : public ACameraRig_Rail
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(BlueprintAssignable) FTestCompleteSignature OnTestComplete;  // 0x0240, size 0x10
    UPROPERTY(BlueprintAssignable) FSetupCompleteSignature OnSetupComplete;  // 0x0250, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ETestRailState CurrentState;  // 0x0260, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 TimeoutDuration;  // 0x0264, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) FTestProfileData ProfileData;  // 0x0268, size 0x60
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) ACharacter* TestCharacter;  // 0x02C8, size 0x8
    FTimerHandle TimeoutHandle;  // 0x02D0, not reflected
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void BeginTest();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetupComplete();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetupTest(ACharacter* InTestCharacter);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void TestComplete();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void TickTest(float DeltaTime);  // parameters 0x4
};
