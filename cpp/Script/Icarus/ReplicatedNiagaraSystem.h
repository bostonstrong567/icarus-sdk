// /Script/Icarus.ReplicatedNiagaraSystem
// Derives from: AActor > UObject
// size 0x248, declared in Icarus/Source/Icarus/Particles/ReplicatedNiagaraSystem.h

UCLASS(Config=Engine)
class AReplicatedNiagaraSystem : public AActor
{
public:
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) UNiagaraSystem* SystemTemplate;  // 0x0220, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bAutoDestroy;  // 0x0228, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bAutoActivate;  // 0x0229, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) ENCPoolMethod PoolingMethod;  // 0x022A, size 0x1
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) bool bPreCullCheck;  // 0x022B, size 0x1
    UPROPERTY(EditAnywhere, Replicated, Instanced, BlueprintReadWrite) USceneComponent* PositionComponent;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, Replicated, BlueprintReadWrite) FName PositionComponentSocket;  // 0x0238, size 0x8
    UPROPERTY(Instanced, BlueprintReadOnly) UNiagaraComponent* SpawnedNiagaraComponent;  // 0x0240, size 0x8
};
