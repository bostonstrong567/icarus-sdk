// /Game/BP/AI/Bosses/BT/IceMammoth/Bat_Spawner_Nest03.Bat_Spawner_Nest03_C
// Derives from: ABat_Spawner_Base_C > AActor > UObject
// size 0x260, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABat_Spawner_Nest03_C : public ABat_Spawner_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene4;  // 0x0240, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene3;  // 0x0248, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene2;  // 0x0250, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* Scene1;  // 0x0258, size 0x8
};
