// /Script/GameplayTags.GameplayTagsManager
// Derives from: UObject
// size 0x240, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

UCLASS(Config=Engine)
class UGameplayTagsManager : public UObject
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    TMulticastDelegate<void __cdecl(FGameplayTag const &),FDefaultDelegateUserPolicy> OnGameplayTagLoadedDelegate;  // 0x0028, not reflected
    int32 NumBitsForContainerSize;  // 0x0040, not reflected
private:
    int32 NetIndexTrueBitNum;  // 0x0044, not reflected
    int32 NetIndexFirstBitSegment;  // 0x0048, not reflected
    uint16 InvalidTagNetIndex;  // 0x004C, not reflected
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> LegacyNativeTags;  // 0x0050, not reflected
    TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0> > RegisteredSearchPaths;  // 0x00A0, not reflected
    TSharedPtr<FGameplayTagNode,0> GameplayRootTag;  // 0x00F0, not reflected
    TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,0>,0> > GameplayTagNodeMap;  // 0x0100, not reflected
    TArray<FGameplayTag,TSizedDefaultAllocator<32> > CommonlyReplicatedTags;  // 0x0150, not reflected
    UPROPERTY() TMap<FName, FGameplayTagSource> TagSources;  // 0x0160, size 0x50
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> RestrictedGameplayTagSourceNames;  // 0x01B0, not reflected
    bool bIsConstructingGameplayTagTree;  // 0x0200, not reflected
    bool bUseFastReplication;  // 0x0201, not reflected
    bool bShouldWarnOnInvalidTags;  // 0x0202, not reflected
    bool bShouldClearInvalidTags;  // 0x0203, not reflected
    bool bDoneAddingNativeTags;  // 0x0204, not reflected
    FString InvalidTagCharacters;  // 0x0208, not reflected
    TArray<TSharedPtr<FGameplayTagNode,0>,TSizedDefaultAllocator<32> > NetworkGameplayTagNodeIndex;  // 0x0218, not reflected
    uint32 NetworkGameplayTagNodeIndexHash;  // 0x0228, not reflected
    bool bNetworkIndexInvalidated;  // 0x022C, not reflected
    UPROPERTY() TArray<UDataTable*> GameplayTagTables;  // 0x0230, size 0x10
};
