// /Script/Icarus.SurvivalCharacterState
// Derives from: UCharacterState > UActorState > UActorComponent > UObject
// size 0x3A0, declared in Icarus/Source/Icarus/Characters/SurvivalCharacterState.h

UCLASS(Config=Engine)
class USurvivalCharacterState : public UCharacterState
{
public:
    UPROPERTY(BlueprintAssignable) FConsumedFood OnConsumedFood;  // 0x0320, size 0x1
    UPROPERTY(BlueprintAssignable) FConsumedWater OnConsumedWater;  // 0x0321, size 0x1
    UPROPERTY(BlueprintAssignable) FConsumedOxygen OnConsumedOxygen;  // 0x0322, size 0x1
    UPROPERTY(BlueprintAssignable) FOxygenUpdated OnOxygenUpdated;  // 0x0323, size 0x1
    UPROPERTY(BlueprintAssignable) FFoodUpdated OnFoodUpdated;  // 0x0324, size 0x1
    UPROPERTY(BlueprintAssignable) FWaterUpdated OnWaterUpdated;  // 0x0325, size 0x1
    UPROPERTY(BlueprintAssignable) FTemperatureUpdated OnTemperatureUpdated;  // 0x0326, size 0x1
    UPROPERTY(BlueprintAssignable) FExternalTemperatureUpdated OnExternalTemperatureUpdated;  // 0x0327, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 OxygenLevel;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 WaterLevel;  // 0x032C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 FoodLevel;  // 0x0330, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MinOxygen;  // 0x0334, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxOxygen;  // 0x0338, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MinWater;  // 0x033C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxWater;  // 0x0340, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MinFood;  // 0x0344, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxFood;  // 0x0348, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) int32 InternalTemperature;  // 0x034C, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 RadiationLevel;  // 0x0350, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MinRadiation;  // 0x0354, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxRadiation;  // 0x0358, size 0x4
    UPROPERTY(BlueprintAssignable) FRadiationUpdated OnRadiationUpdated;  // 0x035C, size 0x1
    UPROPERTY() UTemperatureSingleton* TemperatureSingleton;  // 0x0398, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    float FoodConsumptionTime;  // 0x0360, private
    float FoodConsumptionCycle;  // 0x0364, private
    int32 FoodConsumedPerCycle;  // 0x0368, private
    float WaterConsumptionTime;  // 0x036C, private
    float WaterConsumptionCycle;  // 0x0370, private
    int32 WaterConsumedPerCycle;  // 0x0374, private
    float OxygenConsumptionTime;  // 0x0378, private
    float OxygenConsumptionCycle;  // 0x037C, private
    int32 OxygenConsumedPerCycle;  // 0x0380, private
    float EnvironmentUpdateCycle;  // 0x0384, private
    float EnvironmentTime;  // 0x0388, private
    float PendingDeltaTemperature;  // 0x038C, private
    bool bSurvivalTickEnabled;  // 0x0390, private

    UFUNCTION(BlueprintCallable) void AddFood(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddOxygen(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddRadiation(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddTemperature(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void AddWater(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetFood() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetInternalTemperature() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxFood() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxOxygen() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxRadiation() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxWater() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMinRadiation() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetOxygen() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetRadiation() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetWater() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsSurvivalTickEnabled() const;  // parameters 0x1
    UFUNCTION() void OnRep_Food();
    UFUNCTION() void OnRep_Oxygen();
    UFUNCTION() void OnRep_Radiation();
    UFUNCTION() void OnRep_Water();
    UFUNCTION() void RecalculateSurvivalConsumeRate();
    UFUNCTION() void RecalculateSurvivalVariables();
    UFUNCTION(BlueprintCallable) void SetFood(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetInternalTemperature(int32 NewTemperature);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetOxygen(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetRadiation(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSurvivalTickEnabled(bool bEnabled);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetWater(int32 Amount);  // parameters 0x4
    UFUNCTION() void TemperatureTick(float DeltaTime);  // parameters 0x4
};
