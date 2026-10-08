// /Script/Icarus.IcarusActorUIDLibrary
// Derives from: UObject
// size 0x98, declared in Icarus/Source/Icarus/Actors/IcarusActorUIDLibrary.h

UCLASS()
class UIcarusActorUIDLibrary : public UObject
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<int,TSizedDefaultAllocator<32> > ClaimedUIDs;  // 0x0028, private
    TMap<FObjectKey,int,FDefaultSetAllocator,TDefaultMapHashableKeyFuncs<FObjectKey,int,0> > DesiredUIDs;  // 0x0038, private
    TArray<TTuple<int,int>,TSizedDefaultAllocator<32> > ClaimedUIDConflicts;  // 0x0088, private

    UFUNCTION(BlueprintCallable) void AddPreviouslyClaimedUniqueID(const int32& ClaimedUID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void ForceClaimUniqueID(int32 UID);  // parameters 0x4
    UFUNCTION(BlueprintCallable) bool FreeUniqueID(int32 IDToRemove);  // parameters 0x5
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumClaimedUniqueIDs() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsUniqueIDAvailable(const int32& UniqueID, UObject* ForOwner) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable) int32 TryClaimUniqueID(int32 SuggestedID, UObject* ForOwner);  // parameters 0x14
};
