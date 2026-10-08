// /Game/BP/Quests/NPC/Norex/BPQ_SQ_Norex_Contact_Flare.BPQ_SQ_Norex_Contact_Flare_C
// Derives from: AQuest > AIcarusActor > AActor > UObject
// size 0x490, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABPQ_SQ_Norex_Contact_Flare_C : public AQuest
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0460, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0468, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float RequiredHeight;  // 0x0470, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusItem*> Projectiles;  // 0x0478, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxDistance;  // 0x0488, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float ProjectileHighest;  // 0x048C, size 0x4

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Check();  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_BPQ_SQ_Norex_Contact_Flare(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Find_Highest_Projectile(float& HighestProjectile);  // parameters 0x4, named "Find Highest Projectile"
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void GetDescription(const FText& InDescription, FText& OutDescription, bool& bOutComplete);  // parameters 0x31
    UFUNCTION(BlueprintCallable) void OnProjectileFired(AIcarusPlayerCharacter* Player, AIcarusItem* Projectile);  // parameters 0x10
    UFUNCTION(BlueprintImplementableEvent) void RunOperations(float DeltaSeconds);  // parameters 0x4
    UFUNCTION(BlueprintImplementableEvent) void Setup(bool bFirstTime);  // parameters 0x1
};
