// /Script/Icarus.IcarusPlayerControllerServer
// Derives from: AIcarusPlayerController > AIcarusController > APlayerController > AController > AActor > UObject
// size 0x820, declared in Icarus/Source/Icarus/DedicatedServer/IcarusPlayerControllerServer.h

UCLASS(NotPlaceable, Config=Game)
class AIcarusPlayerControllerServer : public AIcarusPlayerController
{
public:
    UPROPERTY(BlueprintAssignable) FServerProspectListChanged OnServerProspectListChanged;  // 0x07C8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPrepareProspect OnPrepareProspect;  // 0x07D8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPermissionChanged OnLaunchPermissionChanged;  // 0x07E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnPermissionChanged OnDeletePermissionChanged;  // 0x07F8, size 0x10
    UPROPERTY(EditAnywhere) FServerProspectListResponseMulti RequestProspectListCallback;  // 0x0808, size 0x10
    UPROPERTY(Replicated, ReplicatedUsing) bool bHasLaunchPermission;  // 0x081A, size 0x1
    UPROPERTY(Replicated, ReplicatedUsing) bool bHasDeletePermission;  // 0x081B, size 0x1

    // Not reflected: the engine's scripting cannot see these.
    bool bHasVerifiedLoadout;  // 0x07C0
    bool bRequestProspectListInProgress;  // 0x0818, protected
    bool bClientWasKicked;  // 0x0819, protected

    UFUNCTION(BlueprintCallable) void ClaimAndLaunchProspect(FProspectInfo Prospect);  // parameters 0xA0
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientPrepareProspect(FProspectInfo Prospect, bool bIsResuming);  // parameters 0xA1
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientProspectListUpdated();
    UFUNCTION(Client, Reliable, BlueprintNativeEvent) void ClientReceiveServerAvailableProspects(TArray<FProspectInfo> Prospects);  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasProspectDeletePermission() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable, BlueprintPure) bool HasProspectLaunchPermission() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void InitMetaInventory();
    UFUNCTION() void NotifyDeletePermissionChanged();
    UFUNCTION() void NotifyLaunchPermissionChanged();
    UFUNCTION(BlueprintCallable) void RequestServerAvailableProspects(FServerProspectListResponse ProspectListCallback);  // parameters 0x10
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerClaimAndLaunchProspect(FProspectInfo Prospect);  // parameters 0xA0
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerConfirmLoadoutReady(bool bHasLoadout);  // parameters 0x1
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerLoadProspect(FProspectInfo Prospect);  // parameters 0xA0
    UFUNCTION(Server, Reliable, BlueprintNativeEvent) void ServerRequestAvailableProspects();
    UFUNCTION(BlueprintCallable, Server, Reliable, BlueprintNativeEvent) void ServerRequestDeleteProspect(FProspectInfo ProspectInfo);  // parameters 0xA0

    // Virtual functions that start here:
    //   ClientPrepareProspect_Implementation, ClientProspectListUpdated_Implementation
    //   ClientReceiveServerAvailableProspects_Implementation, ServerClaimAndLaunchProspect_Implementation
    //   ServerConfirmLoadoutReady_Implementation, ServerLoadProspect_Implementation
    //   ServerRequestAvailableProspects_Implementation, ServerRequestDeleteProspect_Implementation
};
