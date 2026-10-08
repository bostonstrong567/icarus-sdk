// /Script/AdvancedSessions.AdvancedFriendsLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Plugins/AdvancedSessions/Source/AdvancedSessions/Classes/AdvancedFriendsLibrary.h

UCLASS()
class UAdvancedFriendsLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void GetFriend(APlayerController* PlayerController, FBPUniqueNetId FriendUniqueNetId, FBPFriendInfo& Friend);  // parameters 0x90
    UFUNCTION(BlueprintCallable) static void GetStoredFriendsList(APlayerController* PlayerController, TArray<FBPFriendInfo>& FriendsList);  // parameters 0x18
    UFUNCTION(BlueprintCallable) static void GetStoredRecentPlayersList(FBPUniqueNetId UniqueNetId, TArray<FBPOnlineRecentPlayer>& PlayersList);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static void IsAFriend(APlayerController* PlayerController, FBPUniqueNetId UniqueNetId, bool& IsFriend);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void SendSessionInviteToFriend(APlayerController* PlayerController, const FBPUniqueNetId& FriendUniqueNetId, EBlueprintResultSwitch& Result);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static void SendSessionInviteToFriends(APlayerController* PlayerController, const TArray<FBPUniqueNetId>& Friends, EBlueprintResultSwitch& Result);  // parameters 0x19
};
