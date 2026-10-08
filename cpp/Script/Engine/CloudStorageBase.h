// /Script/Engine.CloudStorageBase
// Derives from: UPlatformInterfaceBase > UObject
// size 0x50, declared in Engine/Source/Runtime/Engine/Classes/Engine/CloudStorageBase.h

UCLASS(Transient)
class UCloudStorageBase : public UPlatformInterfaceBase
{
public:
    UPROPERTY() TArray<FString> LocalCloudFiles;  // 0x0038, size 0x10
    UPROPERTY() uint8 bSuppressDelegateCalls : 1;  // 0x0048, mask 0x01

    // Virtual functions that start here:
    //   CreateCloudDocument, GetCloudDocumentName, GetNumCloudDocuments, Init, ParseDocumentAsBytes
    //   ParseDocumentAsObject, ParseDocumentAsString, QueryForCloudDocuments, ReadCloudDocument
    //   ReadKeyValue, ResolveConflictWithNewestDocument, ResolveConflictWithVersionIndex
    //   SaveDocumentWithBytes, SaveDocumentWithObject, SaveDocumentWithString, WriteCloudDocument
    //   WriteKeyValue
};
