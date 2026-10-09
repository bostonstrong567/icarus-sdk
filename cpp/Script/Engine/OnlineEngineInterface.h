// /Script/Engine.OnlineEngineInterface
// Derives from: UObject
// size 0x28, declared in Engine/Source/Runtime/Engine/Public/Net/OnlineEngineInterface.h

UCLASS(Config=Engine)
class UOnlineEngineInterface : public UObject
{

    // Virtual functions that start here:
    //   AutoLogin, BindToExternalUIOpening, ClearVoicePackets, CloseWebURL, CreateUniquePlayerId
    //   DestroyOnlineSubsystem, DoesInstanceExist, DoesSessionExist, DumpChatState, DumpPartyState
    //   DumpSessionState, DumpVoiceState, EndSession, GetDefaultOnlineSubsystemName, GetLocalPacket
    //   GetNumLocalTalkers, GetNumPIELogins, GetOnlineIdentifier, GetPlayerNickname
    //   GetPlayerPlatformNickname, GetReplicationHashForSubsystem, GetResolvedConnectString
    //   GetSessionJoinability, GetSubsystemFromReplicationHash, GetUniquePlayerId, IsCompatibleUniqueNetId
    //   IsLoaded, IsLoggedIn, LoginPIEInstance, MuteRemoteTalker, RegisterPlayer, SerializeRemotePacket
    //   SetForceDedicated, SetShouldTryOnlinePIE, ShowAchievementsUI, ShowLeaderboardUI, ShowWebURL
    //   ShutdownOnlineSubsystem, StartNetworkedVoice, StartSession, StopNetworkedVoice, SupportsOnlinePIE
    //   UnmuteRemoteTalker, UnregisterPlayer, UnregisterPlayers, UpdateSessionJoinability
};
