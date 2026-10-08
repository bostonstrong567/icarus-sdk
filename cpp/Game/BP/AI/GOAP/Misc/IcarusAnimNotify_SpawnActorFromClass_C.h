// /Game/BP/AI/GOAP/Misc/IcarusAnimNotify_SpawnActorFromClass.IcarusAnimNotify_SpawnActorFromClass_C
// Derives from: UAnimNotify > UObject
// size 0x4A, a blueprint class, blueprint

UCLASS(Const, Config=Engine)
class UIcarusAnimNotify_SpawnActorFromClass_C : public UAnimNotify
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TSubclassOf<AActor> ActorClassToSpawn;  // 0x0038, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName SocketToSpawnAt;  // 0x0040, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool SpawnOnServerOnly;  // 0x0048, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESpawnActorCollisionHandlingMethod CollisionHandlingOverride;  // 0x0049, size 0x1

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) FString GetNotifyName() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) bool Received_Notify(USkeletalMeshComponent* MeshComp, UAnimSequenceBase* Animation) const;  // parameters 0x11
};
