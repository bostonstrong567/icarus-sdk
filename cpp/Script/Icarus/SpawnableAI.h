// /Script/Icarus.SpawnableAI
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/AI/SpawnableAI.h

UCLASS(Abstract)
class USpawnableAI : public UInterface
{
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) UActorState* GetAIActorState();  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) FAISetupRowHandle GetAISetupRowHandle() const;  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure, BlueprintNativeEvent) UIcarusStatContainer* GetAIStatContainer() const;  // parameters 0x8
    UFUNCTION() TArray<AIcarusPlayerCharacter*> GetAllDamagingPlayerCharacters() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) int32 GetCurrentLevel();  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FText GetEpicCreatureName();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) FEpicCreaturesRowHandle GetEpicCreatureRowHandle();  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetCreatureLevel(int32 CreatureLevel);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetEpicCreatureName(const FText& NewName);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void SetupAI(FAISetupRowHandle AISetupData, FEpicCreaturesRowHandle EpicCreatureSetup);  // parameters 0x30
    UFUNCTION() void TrackBestiaryDamage(FIcarusDamagePacket DamagePacketIn);  // parameters 0xD8
    UFUNCTION() void TrackBestiaryDeath(UActorState* ActorStateIn);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent) void UpdateCreatureGrowthStats();
};
