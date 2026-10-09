// /Script/CoreUObject.Enum
// Derives from: UField > UObject
// size 0x60, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UEnum : public UField
{
public:
    FString CppType;  // 0x0030, not reflected
protected:
    TArray<TTuple<FName,__int64>,TSizedDefaultAllocator<32> > Names;  // 0x0040, not reflected
    UEnum::ECppForm CppForm;  // 0x0050, not reflected
    EEnumFlags EnumFlags;  // 0x0054, not reflected
    FText (*)(int32) EnumDisplayNameFn;  // 0x0058, not reflected

    // Virtual functions that start here:
    //   GenerateFullEnumName, GetAuthoredNameStringByIndex, GetDisplayNameTextByIndex, ResolveEnumerator
    //   SetEnums
};
