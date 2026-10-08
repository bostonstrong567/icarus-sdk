DELEGATE() void MagicLeapARPinDataLoadAttemptCompleted(bool bDataRestored);  // parameters 0x1
DELEGATE() void MagicLeapARPinUpdatedDelegate(const TArray<FGuid>& Added, const TArray<FGuid>& Updated, const TArray<FGuid>& Deleted);  // parameters 0x30
DELEGATE() void MagicLeapARPinUpdatedMultiDelegate(const TArray<FGuid>& Added, const TArray<FGuid>& Updated, const TArray<FGuid>& Deleted);  // parameters 0x30
DELEGATE() void MagicLeapContentBindingFoundDelegate(const FGuid& PinId, const TSet<FString>& PinnedObjectIds);  // parameters 0x60
DELEGATE() void MagicLeapContentBindingFoundMultiDelegate(const FGuid& PinId, const TSet<FString>& PinnedObjectIds);  // parameters 0x60
DELEGATE() void PersistentEntityPinLost();
DELEGATE() void PersistentEntityPinned(bool bRestoredOrSynced);  // parameters 0x1
