// /Script/Icarus.ActorState
// Derives from: UActorComponent > UObject
// size 0x270, declared in Icarus/Source/Icarus/Characters/ActorState.h

UCLASS(Config=Engine)
class UActorState : public UActorComponent
{
public:
    UPROPERTY(BlueprintReadOnly) FIcarusDamagePacket LastDamagePacket;  // 0x00B0, size 0xD8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bKeepRecentDamageEvents;  // 0x0188, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RecentDamageLifetime;  // 0x018C, size 0x4
    UPROPERTY(BlueprintReadOnly) TArray<FIcarusDamagePacket> RecentDamagePackets;  // 0x0190, size 0x10
    UPROPERTY(BlueprintAssignable) FActorStateReady OnActorStateReady;  // 0x01B0, size 0x10
    UPROPERTY(BlueprintAssignable) FActorDeath OnActorDeath;  // 0x01C0, size 0x1
    UPROPERTY(BlueprintAssignable) FAliveStateChangedSignature OnAliveStateChanged;  // 0x01C1, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDamagedSignature OnDamaged;  // 0x01C2, size 0x1
    UPROPERTY(BlueprintAssignable) FOnHealthUpdated OnHealthUpdated;  // 0x01C3, size 0x1
    UPROPERTY(BlueprintAssignable) FOnArmorUpdated OnArmorUpdated;  // 0x01C4, size 0x1
    UPROPERTY(BlueprintAssignable) FShelterUpdated OnShelterUpdated;  // 0x01C5, size 0x1
    UPROPERTY(BlueprintAssignable) FBiomeUpdated BiomeUpdated;  // 0x01C6, size 0x1
    UPROPERTY(BlueprintAssignable) FOnActorDamaged OnActorDamaged;  // 0x01C7, size 0x1
    UPROPERTY(BlueprintAssignable) FOnDamageReturned OnDamageReturned;  // 0x01C8, size 0x10
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Health;  // 0x01D8, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadOnly) int32 MaxHealth;  // 0x01DC, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) int32 Armor;  // 0x01E0, size 0x4
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadOnly) int32 MaxArmor;  // 0x01E4, size 0x4
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) float Shelter;  // 0x01E8, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) int32 ExternalTemperature;  // 0x01EC, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) int32 ModifiedExternalTemperature;  // 0x01F0, size 0x4
    UPROPERTY(Replicated, BlueprintReadOnly) int32 ModifiedInternalTemperature;  // 0x01F4, size 0x4
    UPROPERTY(Replicated, ReplicatedUsing, BlueprintReadOnly) FBiomesRowHandle CurrentBiome;  // 0x01F8, size 0x18
    UPROPERTY(Replicated, ReplicatedUsing) EAliveState CurrentAliveState;  // 0x0210, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bSkipStatContainerChecks;  // 0x0211, size 0x1
    UPROPERTY(Instanced) UIcarusStatContainer* OwnerStatContainer;  // 0x0218, size 0x8
    UPROPERTY() FBiomesRowHandle BiomeOverride;  // 0x022C, size 0x18
    UPROPERTY() FAtmospheresRowHandle AtmosphereOverride;  // 0x0244, size 0x18
    UPROPERTY() bool BlockBiomeUpdate;  // 0x025C, size 0x1
    UPROPERTY() bool BlockAtmosphereUpdate;  // 0x025D, size 0x1
    UPROPERTY() bool bHasHealthRegen;  // 0x0264, size 0x1
    UPROPERTY() int32 BiomeModifierID;  // 0x0268, size 0x4

    // Not reflected: the engine's scripting cannot see these.
    FTimerHandle ClearStaleDamagePacketsHandle;  // 0x01A0, private
    float WeatherTimeCycle;  // 0x01A8, private
    float WeatherTimeElapsedTime;  // 0x01AC, private
    float HealthRegenTime;  // 0x0220, private
    float HealthRegenCycle;  // 0x0224, private
    int32 HealthAddedPerCycle;  // 0x0228, private
    int32 CurrentUID;  // 0x0260, private

    UFUNCTION(BlueprintCallable) void AddHealth(int32 Amount);  // parameters 0x4
    UFUNCTION() bool CanRegenerateHealth() const;  // parameters 0x1
    UFUNCTION() int32 ConsumeNextUID();  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FlushAllRecentDamage();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetArmor() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetArmorPercent() const;  // parameters 0x4
    UFUNCTION() FBoxSphereBounds GetBoundsForTemperatureEffect() const;  // parameters 0x1C
    UFUNCTION() int32 GetEnvironmentalTemperature();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetHealth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxArmor() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetMaxHealth() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRecentDamageCausedByActor(AActor* DamageCauser, float Duration) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRecentDamageCausedByController(AController* DamageInstigator, float Duration) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetRecentDamageCausedByPlayersOrMounts(float Duration) const;  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetShelter() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetTotalRecentDamage(float Duration) const;  // parameters 0x8
    UFUNCTION() void InternalTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsAlive() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Kill();
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multicast_OnDamaged(int32 InDamage, FDamageEvent DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x28
    UFUNCTION(BlueprintNativeEvent) void OnCurrentBiomeUpdated(const FBiomesRowHandle& NewBiome);  // parameters 0x18
    UFUNCTION() void OnRep_Armor();
    UFUNCTION() void OnRep_CurrentAliveState();
    UFUNCTION() void OnRep_CurrentBiome();
    UFUNCTION() void OnRep_Health();
    UFUNCTION() void OnRep_MaxArmor();
    UFUNCTION() void OnRep_ModifiedExternalTemp();
    UFUNCTION() void RecalculateCurrentHealth();
    UFUNCTION() void RecalculateHealthRegenRate();
    UFUNCTION() void RegenTick(float DeltaTime);  // parameters 0x4
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void RequestBiomeUpdate();
    UFUNCTION(BlueprintCallable) void RequestClientsideBiomeUpdate();
    UFUNCTION(BlueprintCallable) void Respawn();
    UFUNCTION(BlueprintCallable) void SetArmor(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetArmorPercent(int32 Percent);  // parameters 0x4
    UFUNCTION() void SetBiome(FBiomesRowHandle Biome);  // parameters 0x18
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void SetBiomeOverride(FBiomesRowHandle Biome);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void SetBlockBiomeUpdate(bool Block);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetHealth(int32 Amount);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetShelter(float Amount);  // parameters 0x4
    UFUNCTION() void StatContainerUpdated();
    UFUNCTION() void TakeDamage(FIcarusDamagePacket DamagePacket);  // parameters 0xD8
    UFUNCTION() void WeatherTimeTick(float Delta);  // parameters 0x4

    // Virtual functions that start here:
    //   CanRegenerateHealth, GetBoundsForTemperatureEffect, InternalTick, IsAlive
    //   Multicast_OnDamaged_Implementation, OnCurrentBiomeUpdated_Implementation, OnRep_CurrentBiome
    //   OnRep_ModifiedExternalTemp, RecalculateTick, RegenTick, Respawn, StatContainerUpdated
};
