// /Script/Icarus.OfflinePackageFlagsSubsystem
// Derives from: UGameInstanceSubsystem > USubsystem > UObject
// size 0x48, declared in Icarus/Source/Icarus/Subsystems/Offline/OfflinePackageFlagsSubsystem.h

UCLASS()
class UOfflinePackageFlagsSubsystem : public UGameInstanceSubsystem
{
public:

    // Not reflected: the engine's scripting cannot see these.
    TArray<int,TSizedDefaultAllocator<32> > CachedPackageFlags;  // 0x0030, protected
    bool bHasFetchedPackageFlags;  // 0x0040, private

    UFUNCTION(BlueprintCallable) bool FetchAndGrantPackageFlagsForCurrentUser(FString PlayerID, TArray<int32>& PackageFlags, FString& FailReason);  // parameters 0x31
    UFUNCTION(BlueprintCallable) bool HasPackageFlag(FString PlayerID, const FDLCPackageDataRowHandle& PackageFlag);  // parameters 0x29
    UFUNCTION(BlueprintCallable) static bool LoadFlagsFromFile(FString PlayerID, TArray<int32>& AccountFlags);  // parameters 0x21
    UFUNCTION(BlueprintCallable) static bool SaveFlagsToFile(FString PlayerID, TArray<int32> AccountFlags);  // parameters 0x21
};
