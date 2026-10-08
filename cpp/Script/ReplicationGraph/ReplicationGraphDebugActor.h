// /Script/ReplicationGraph.ReplicationGraphDebugActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Plugins/Runtime/ReplicationGraph/Source/Public/ReplicationGraph.h

UCLASS(Transient, NotPlaceable, Config=Engine)
class AReplicationGraphDebugActor : public AActor
{
public:
    UPROPERTY() UReplicationGraph* ReplicationGraph;  // 0x0220, size 0x8
    UPROPERTY() UNetReplicationGraphConnection* ConnectionManager;  // 0x0228, size 0x8

    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientCellInfo(FVector CellLocation, FVector CellExtent, TArray<AActor*> Actors);  // parameters 0x28
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerCellInfo();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerPrintAllActorInfo(FString Str);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerPrintCullDistances();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetConditionalActorBreakpoint(AActor* Actor);  // parameters 0x8
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetCullDistanceForClass(TSubclassOf<UObject> Class, float CullDistance);  // parameters 0xC
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerSetPeriodFrameForClass(TSubclassOf<UObject> Class, int32 PeriodFrame);  // parameters 0xC
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerStartDebugging();
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerStopDebugging();

    // Virtual functions that start here:
    //   ClientCellInfo_Implementation, ServerCellInfo_Implementation
    //   ServerPrintAllActorInfo_Implementation, ServerPrintCullDistances_Implementation
    //   ServerSetConditionalActorBreakpoint_Implementation, ServerSetCullDistanceForClass_Implementation
    //   ServerSetPeriodFrameForClass_Implementation, ServerStartDebugging_Implementation
    //   ServerStopDebugging_Implementation
};
