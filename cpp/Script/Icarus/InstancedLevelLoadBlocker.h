// /Script/Icarus.InstancedLevelLoadBlocker
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Characters/Components/InstancedLevelLoadBlocker.h

UCLASS(Config=Engine)
class UInstancedLevelLoadBlocker : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere) bool bClientBlocking;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) bool bServerBlocking;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCurrentBlocking;  // 0x00B2, size 0x1
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* ViewportBlocker;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) FString UniqueLevelName;  // 0x00C0, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    bool bLocal;  // 0x00B3, protected

    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_SetLoadedLevelName(FString UniqueNameIn);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_UpdateClientLoadBlocker(bool bBlock);  // parameters 0x1
    UFUNCTION() void UpdateBlocker();
};
