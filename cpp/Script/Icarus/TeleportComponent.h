// /Script/Icarus.TeleportComponent
// Derives from: UActorComponent > UObject
// size 0x170, declared in Icarus/Source/Icarus/World/InstancedLevels/TeleportComponent.h

UCLASS(EditInlineNew, Config=Engine)
class UTeleportComponent : public UActorComponent
{
public:
    UPROPERTY(EditAnywhere, Replicated, ReplicatedUsing, BlueprintReadWrite) FTeleportInfo TeleportInfo;  // 0x00B0, size 0xC0

    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multi_LoadLevel(FTeleportInfo InTeleportInfo, FVector LocationToLoadLevel);  // parameters 0xCC
    UFUNCTION(NetMulticast, Reliable, BlueprintNativeEvent) void Multi_UnloadLevel(FTeleportInfo InTeleportInfo);  // parameters 0xC0
    UFUNCTION() void OnRep_TeleportInfo();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void Server_TeleportRequested(AActor* Instigator);  // parameters 0x8

    // Virtual functions that start here:
    //   OnRep_TeleportInfo
};
