// /Game/BP/Quests/Implementations/Bw5/BP_BW5_Boss.BP_BW5_Boss_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x478, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_BW5_Boss_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UIcarusMapIconComponent* IcarusMapIcon;  // 0x0468, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0470, size 0x8

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BP_BW5_Boss(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnActorDeath(UActorState* ActorState);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void OnDamaged(UActorState* ActorState, int32 DamageTaken, const FDamageEvent& DamageEvent, AController* Instigator, AActor* DamageCauser);  // parameters 0x30
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
