// /Game/BP/AI/Bosses/Misc/BP_GreatApe_Drop_Log.BP_GreatApe_Drop_Log_C
// Derives from: AActor > UObject
// size 0x249, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_GreatApe_Drop_Log_C : public AActor
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0230, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<TSoftObjectPtr<UStaticMesh>> LogMeshes;  // 0x0238, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool LevelSpawn;  // 0x0248, size 0x1

    UFUNCTION() void ExecuteUbergraph_BP_GreatApe_Drop_Log(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void GetNumLogs(int32& Count);  // parameters 0x4
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable) void Multi_PushLog(FVector Impulse, int32 LogIndex);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void OnLoaded_15F0DAA84D96562538870EB880F30603(UObject* Loaded);  // parameters 0x8
    UFUNCTION(BlueprintImplementableEvent) void ReceiveHit(UPrimitiveComponent* MyComp, AActor* Other, UPrimitiveComponent* OtherComp, bool bSelfMoved, FVector HitLocation, FVector HitNormal, FVector NormalImpulse, const FHitResult& Hit);  // parameters 0xC8
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent) void UserConstructionScript();
};
