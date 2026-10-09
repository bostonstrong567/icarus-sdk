// /Script/Icarus.InstancedLevelLoadBlocker
// Derives from: UActorComponent > UObject
// size 0xD0, declared in Icarus/Source/Icarus/Characters/Components/InstancedLevelLoadBlocker.h

UCLASS(Config=Engine)
class UInstancedLevelLoadBlocker : public UActorComponent
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
protected:
    UPROPERTY(EditAnywhere) bool bClientBlocking;  // 0x00B0, size 0x1
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing) bool bServerBlocking;  // 0x00B1, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bCurrentBlocking;  // 0x00B2, size 0x1
    bool bLocal;  // 0x00B3, not reflected
    UPROPERTY(EditAnywhere) UScopedViewportBlocker* ViewportBlocker;  // 0x00B8, size 0x8
    UPROPERTY(EditAnywhere) FString UniqueLevelName;  // 0x00C0, size 0x10
public:
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void Client_SetLoadedLevelName(FString UniqueNameIn);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void Server_UpdateClientLoadBlocker(bool bBlock);  // parameters 0x1
    UFUNCTION() void UpdateBlocker();
};
