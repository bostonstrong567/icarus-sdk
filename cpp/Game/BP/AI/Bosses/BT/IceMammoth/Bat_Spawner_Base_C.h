// /Game/BP/AI/Bosses/BT/IceMammoth/Bat_Spawner_Base.Bat_Spawner_Base_C
// Derives from: AActor > UObject
// size 0x231, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABat_Spawner_Base_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0228, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActive;  // 0x0230, size 0x1

    UFUNCTION(BlueprintCallable) void GetRandomSceneComponent(USceneComponent*& RandomComponent, bool& IsValid);  // parameters 0x9
};
