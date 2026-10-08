// /Game/BP/Utilities/WT/WT_CaveVoid.WT_CaveVoid_C
// Derives from: AActor > UObject
// size 0x239, a blueprint class, blueprint

UCLASS(Config=Engine)
class AWT_CaveVoid_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UArrowComponent* Arrow;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Plane;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsBright;  // 0x0238, size 0x1
};
