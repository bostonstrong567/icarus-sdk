// /Script/GameplayTags.GameplayTagsManager
// Derives from: UObject
// size 0x240, declared in Engine/Source/Runtime/GameplayTags/Classes/GameplayTagsManager.h

UCLASS(Config=Engine)
class UGameplayTagsManager : public UObject
{
public:
    UPROPERTY() TMap<FName, FGameplayTagSource> TagSources;  // 0x0160, size 0x50
    UPROPERTY() TArray<UDataTable*> GameplayTagTables;  // 0x0230, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(FGameplayTag const &),FDefaultDelegateUserPolicy> OnGameplayTagLoadedDelegate;  // 0x0028
    int32 NumBitsForContainerSize;  // 0x0040
    int32 NetIndexTrueBitNum;  // 0x0044, private
    int32 NetIndexFirstBitSegment;  // 0x0048, private
    uint16 InvalidTagNetIndex;  // 0x004C, private
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> LegacyNativeTags;  // 0x0050, private
    TMap<FString,FGameplayTagSearchPathInfo,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FString,FGameplayTagSearchPathInfo,0> > RegisteredSearchPaths;  // 0x00A0, private
    TSharedPtr<FGameplayTagNode,0> GameplayRootTag;  // 0x00F0, private
    TMap<FGameplayTag,TSharedPtr<FGameplayTagNode,0>,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FGameplayTag,TSharedPtr<FGameplayTagNode,0>,0> > GameplayTagNodeMap;  // 0x0100, private
    TArray<FGameplayTag,TSizedDefaultAllocator<32> > CommonlyReplicatedTags;  // 0x0150, private
    TSet<FName,DefaultKeyFuncs<FName,0>,FDefaultSetAllocator> RestrictedGameplayTagSourceNames;  // 0x01B0, private
    bool bIsConstructingGameplayTagTree;  // 0x0200, private
    bool bUseFastReplication;  // 0x0201, private
    bool bShouldWarnOnInvalidTags;  // 0x0202, private
    bool bShouldClearInvalidTags;  // 0x0203, private
    bool bDoneAddingNativeTags;  // 0x0204, private
    FString InvalidTagCharacters;  // 0x0208, private
    TArray<TSharedPtr<FGameplayTagNode,0>,TSizedDefaultAllocator<32> > NetworkGameplayTagNodeIndex;  // 0x0218, private
    uint32 NetworkGameplayTagNodeIndexHash;  // 0x0228, private
    bool bNetworkIndexInvalidated;  // 0x022C, private
};
