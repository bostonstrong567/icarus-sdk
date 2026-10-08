// /Script/CoreUObject.Struct
// Derives from: UField > UObject
// size 0xB0, declared in Engine/Source/Runtime/CoreUObject/Public/UObject/Class.h

UCLASS()
class UStruct : public UField
{
public:

    // Not reflected: the engine's scripting cannot see these.
    UStruct * SuperStruct;  // 0x0040, private
    UField * Children;  // 0x0048
    FField * ChildProperties;  // 0x0050
    int32 PropertiesSize;  // 0x0058
    int32 MinAlignment;  // 0x005C
    TArray<unsigned char,TSizedDefaultAllocator<32> > Script;  // 0x0060
    FProperty * PropertyLink;  // 0x0070
    FProperty * RefLink;  // 0x0078
    FProperty * DestructorLink;  // 0x0080
    FProperty * PostConstructLink;  // 0x0088
    TArray<UObject *,TSizedDefaultAllocator<32> > ScriptAndPropertyObjectReferences;  // 0x0090
    TArray<TTuple<TFieldPath<FField>,int>,TSizedDefaultAllocator<32> > * UnresolvedScriptProperties;  // 0x00A0
    const FUnversionedStructSchema * UnversionedSchema;  // 0x00A8

    // Virtual functions that start here:
    //   ArePropertyGuidsAvailable, CustomFindProperty, DestroyStruct, FindPropertyGuidFromName
    //   FindPropertyNameFromGuid, GetAuthoredNameForField, GetInheritanceSuper, GetPrefixCPP
    //   InitializeStruct, IsStructTrashed, Link, PropertyNameToDisplayName, SerializeBin, SerializeExpr
    //   SerializeTaggedProperties, SetSuperStruct
};
