// Class FieldSystemEngine.FieldSystemActor
class AFieldSystemActor : public UActor {

public:

	struct UFieldSystemComponent FieldSystemComponent; // 0x220 (8)
};

// Class FieldSystemEngine.FieldSystemComponent
class UFieldSystemComponent : public UPrimitiveComponent {

public:

	struct UFieldSystem FieldSystem; // 0x408 (8)
	struct TArray<struct TSoftObjectPtr<AChaosSolverActor>> SupportedSolvers; // 0x420 (16)

	void ResetFieldSystem(); // Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BB5A0>
	void ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BB3F0>
	void ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations); // Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BB240>
	void ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius); // Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BB120>
	void ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BAFB0>
	void ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BAE90>
	void ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field); // Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BAD40>
	void ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude); // Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce(Final|Native|Public|HasDefaults|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BAC20>
	void AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field); // Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand(Final|Native|Public|BlueprintCallable) // <VeiledExperts-Win64-Shipping.exe+0x35BAAD0>
};

// Class FieldSystemEngine.FieldSystemMetaDataIteration
class UFieldSystemMetaDataIteration : public UFieldSystemMetaData {

public:

	int32_t Iterations; // 0xB0 (4)

	struct UFieldSystemMetaDataIteration SetMetaDataIteration(int32_t Iterations); // Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BB8F0>
};

// Class FieldSystemEngine.FieldSystemMetaDataProcessingResolution
class UFieldSystemMetaDataProcessingResolution : public UFieldSystemMetaData {

public:

	enum class EFieldResolutionType ResolutionType; // 0xB0 (1)

	struct UFieldSystemMetaDataProcessingResolution SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType); // Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BB980>
};

// Class FieldSystemEngine.UniformInteger
class UUniformInteger : public UFieldNodeInt {

public:

	int32_t Magnitude; // 0xB0 (4)

	struct UUniformInteger SetUniformInteger(int32_t Magnitude); // Function FieldSystemEngine.UniformInteger.SetUniformInteger(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BB8F0>
};

// Class FieldSystemEngine.RadialIntMask
class URadialIntMask : public UFieldNodeInt {

public:

	float Radius; // 0xB0 (4)
	struct FVector Position; // 0xB4 (12)
	int32_t InteriorValue; // 0xC0 (4)
	int32_t ExteriorValue; // 0xC4 (4)
	enum class ESetMaskConditionType SetMaskCondition; // 0xC8 (1)

	struct URadialIntMask SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn); // Function FieldSystemEngine.RadialIntMask.SetRadialIntMask(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC180>
};

// Class FieldSystemEngine.UniformScalar
class UUniformScalar : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)

	struct UUniformScalar SetUniformScalar(float Magnitude); // Function FieldSystemEngine.UniformScalar.SetUniformScalar(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC420>
};

// Class FieldSystemEngine.RadialFalloff
class URadialFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	float Radius; // 0xC0 (4)
	struct FVector Position; // 0xC4 (12)
	enum class EFieldFalloffType Falloff; // 0xD0 (1)

	struct URadialFalloff SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.RadialFalloff.SetRadialFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BBF60>
};

// Class FieldSystemEngine.PlaneFalloff
class UPlaneFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	float Distance; // 0xC0 (4)
	struct FVector Position; // 0xC4 (12)
	struct FVector Normal; // 0xD0 (12)
	enum class EFieldFalloffType Falloff; // 0xDC (1)

	struct UPlaneFalloff SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BBCE0>
};

// Class FieldSystemEngine.BoxFalloff
class UBoxFalloff : public UFieldNodeFloat {

public:

	float Magnitude; // 0xB0 (4)
	float MinRange; // 0xB4 (4)
	float MaxRange; // 0xB8 (4)
	float Default; // 0xBC (4)
	struct FTransform Transform; // 0xC0 (48)
	enum class EFieldFalloffType Falloff; // 0xF0 (1)

	struct UBoxFalloff SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff); // Function FieldSystemEngine.BoxFalloff.SetBoxFalloff(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BB5C0>
};

// Class FieldSystemEngine.NoiseField
class UNoiseField : public UFieldNodeFloat {

public:

	float MinRange; // 0xB0 (4)
	float MaxRange; // 0xB4 (4)
	struct FTransform Transform; // 0xC0 (48)

	struct UNoiseField SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform); // Function FieldSystemEngine.NoiseField.SetNoiseField(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BBA10>
};

// Class FieldSystemEngine.UniformVector
class UUniformVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct FVector Direction; // 0xB4 (12)

	struct UUniformVector SetUniformVector(float Magnitude, struct FVector Direction); // Function FieldSystemEngine.UniformVector.SetUniformVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC340>
};

// Class FieldSystemEngine.RadialVector
class URadialVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)
	struct FVector Position; // 0xB4 (12)

	struct URadialVector SetRadialVector(float Magnitude, struct FVector Position); // Function FieldSystemEngine.RadialVector.SetRadialVector(Final|Native|Public|HasDefaults|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC340>
};

// Class FieldSystemEngine.RandomVector
class URandomVector : public UFieldNodeVector {

public:

	float Magnitude; // 0xB0 (4)

	struct URandomVector SetRandomVector(float Magnitude); // Function FieldSystemEngine.RandomVector.SetRandomVector(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC420>
};

// Class FieldSystemEngine.OperatorField
class UOperatorField : public UFieldNodeBase {

public:

	float Magnitude; // 0xB0 (4)
	struct UFieldNodeBase RightField; // 0xB8 (8)
	struct UFieldNodeBase LeftField; // 0xC0 (8)
	enum class EFieldOperationType Operation; // 0xC8 (1)

	struct UOperatorField SetOperatorField(float Magnitude, struct UFieldNodeBase RightField, struct UFieldNodeBase LeftField, enum class EFieldOperationType Operation); // Function FieldSystemEngine.OperatorField.SetOperatorField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BBB90>
};

// Class FieldSystemEngine.ToIntegerField
class UToIntegerField : public UFieldNodeInt {

public:

	struct UFieldNodeFloat FloatField; // 0xB0 (8)

	struct UToIntegerField SetToIntegerField(struct UFieldNodeFloat FloatField); // Function FieldSystemEngine.ToIntegerField.SetToIntegerField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC4E0>
};

// Class FieldSystemEngine.ToFloatField
class UToFloatField : public UFieldNodeFloat {

public:

	struct UFieldNodeInt IntField; // 0xB0 (8)

	struct UToFloatField SetToFloatField(struct UFieldNodeInt IntegerField); // Function FieldSystemEngine.ToFloatField.SetToFloatField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BC4E0>
};

// Class FieldSystemEngine.CullingField
class UCullingField : public UFieldNodeBase {

public:

	struct UFieldNodeBase Culling; // 0xB0 (8)
	struct UFieldNodeBase Field; // 0xB8 (8)
	enum class EFieldCullingOperationType Operation; // 0xC0 (1)

	struct UCullingField SetCullingField(struct UFieldNodeBase Culling, struct UFieldNodeBase Field, enum class EFieldCullingOperationType Operation); // Function FieldSystemEngine.CullingField.SetCullingField(Final|Native|Public|BlueprintCallable|BlueprintPure) // <VeiledExperts-Win64-Shipping.exe+0x35BB7F0>
};

// Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem
inline void UFieldSystemComponent::ResetFieldSystem() {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ResetFieldSystem");

	struct ResetFieldSystem_Params {
		
	}; ResetFieldSystem_Params Params;


	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce
inline void UFieldSystemComponent::ApplyUniformVectorFalloffForce(bool Enabled, struct FVector Position, struct FVector Direction, float Radius, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyUniformVectorFalloffForce");

	struct ApplyUniformVectorFalloffForce_Params {
		bool Enabled;
		struct FVector Position;
		struct FVector Direction;
		float Radius;
		float Magnitude;
	}; ApplyUniformVectorFalloffForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Direction = Direction;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField
inline void UFieldSystemComponent::ApplyStrainField(bool Enabled, struct FVector Position, float Radius, float Magnitude, int32_t Iterations) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStrainField");

	struct ApplyStrainField_Params {
		bool Enabled;
		struct FVector Position;
		float Radius;
		float Magnitude;
		int32_t Iterations;
	}; ApplyStrainField_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;
	Params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField
inline void UFieldSystemComponent::ApplyStayDynamicField(bool Enabled, struct FVector Position, float Radius) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyStayDynamicField");

	struct ApplyStayDynamicField_Params {
		bool Enabled;
		struct FVector Position;
		float Radius;
	}; ApplyStayDynamicField_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce
inline void UFieldSystemComponent::ApplyRadialVectorFalloffForce(bool Enabled, struct FVector Position, float Radius, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialVectorFalloffForce");

	struct ApplyRadialVectorFalloffForce_Params {
		bool Enabled;
		struct FVector Position;
		float Radius;
		float Magnitude;
	}; ApplyRadialVectorFalloffForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Radius = Radius;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce
inline void UFieldSystemComponent::ApplyRadialForce(bool Enabled, struct FVector Position, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyRadialForce");

	struct ApplyRadialForce_Params {
		bool Enabled;
		struct FVector Position;
		float Magnitude;
	}; ApplyRadialForce_Params Params;

	Params.Enabled = Enabled;
	Params.Position = Position;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField
inline void UFieldSystemComponent::ApplyPhysicsField(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyPhysicsField");

	struct ApplyPhysicsField_Params {
		bool Enabled;
		enum class EFieldPhysicsType Target;
		struct UFieldSystemMetaData MetaData;
		struct UFieldNodeBase Field;
	}; ApplyPhysicsField_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce
inline void UFieldSystemComponent::ApplyLinearForce(bool Enabled, struct FVector Direction, float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.ApplyLinearForce");

	struct ApplyLinearForce_Params {
		bool Enabled;
		struct FVector Direction;
		float Magnitude;
	}; ApplyLinearForce_Params Params;

	Params.Enabled = Enabled;
	Params.Direction = Direction;
	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand
inline void UFieldSystemComponent::AddFieldCommand(bool Enabled, enum class EFieldPhysicsType Target, struct UFieldSystemMetaData MetaData, struct UFieldNodeBase Field) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemComponent.AddFieldCommand");

	struct AddFieldCommand_Params {
		bool Enabled;
		enum class EFieldPhysicsType Target;
		struct UFieldSystemMetaData MetaData;
		struct UFieldNodeBase Field;
	}; AddFieldCommand_Params Params;

	Params.Enabled = Enabled;
	Params.Target = Target;
	Params.MetaData = MetaData;
	Params.Field = Field;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;
}

// Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration
inline struct UFieldSystemMetaDataIteration UFieldSystemMetaDataIteration::SetMetaDataIteration(int32_t Iterations) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataIteration.SetMetaDataIteration");

	struct SetMetaDataIteration_Params {
		int32_t Iterations;
		struct UFieldSystemMetaDataIteration ReturnValue;

	}; SetMetaDataIteration_Params Params;

	Params.Iterations = Iterations;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType
inline struct UFieldSystemMetaDataProcessingResolution UFieldSystemMetaDataProcessingResolution::SetMetaDataaProcessingResolutionType(enum class EFieldResolutionType ResolutionType) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.FieldSystemMetaDataProcessingResolution.SetMetaDataaProcessingResolutionType");

	struct SetMetaDataaProcessingResolutionType_Params {
		enum class EFieldResolutionType ResolutionType;
		struct UFieldSystemMetaDataProcessingResolution ReturnValue;

	}; SetMetaDataaProcessingResolutionType_Params Params;

	Params.ResolutionType = ResolutionType;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformInteger.SetUniformInteger
inline struct UUniformInteger UUniformInteger::SetUniformInteger(int32_t Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformInteger.SetUniformInteger");

	struct SetUniformInteger_Params {
		int32_t Magnitude;
		struct UUniformInteger ReturnValue;

	}; SetUniformInteger_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialIntMask.SetRadialIntMask
inline struct URadialIntMask URadialIntMask::SetRadialIntMask(float Radius, struct FVector Position, int32_t InteriorValue, int32_t ExteriorValue, enum class ESetMaskConditionType SetMaskConditionIn) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialIntMask.SetRadialIntMask");

	struct SetRadialIntMask_Params {
		float Radius;
		struct FVector Position;
		int32_t InteriorValue;
		int32_t ExteriorValue;
		enum class ESetMaskConditionType SetMaskConditionIn;
		struct URadialIntMask ReturnValue;

	}; SetRadialIntMask_Params Params;

	Params.Radius = Radius;
	Params.Position = Position;
	Params.InteriorValue = InteriorValue;
	Params.ExteriorValue = ExteriorValue;
	Params.SetMaskConditionIn = SetMaskConditionIn;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformScalar.SetUniformScalar
inline struct UUniformScalar UUniformScalar::SetUniformScalar(float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformScalar.SetUniformScalar");

	struct SetUniformScalar_Params {
		float Magnitude;
		struct UUniformScalar ReturnValue;

	}; SetUniformScalar_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialFalloff.SetRadialFalloff
inline struct URadialFalloff URadialFalloff::SetRadialFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Radius, struct FVector Position, enum class EFieldFalloffType Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialFalloff.SetRadialFalloff");

	struct SetRadialFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Radius;
		struct FVector Position;
		enum class EFieldFalloffType Falloff;
		struct URadialFalloff ReturnValue;

	}; SetRadialFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Radius = Radius;
	Params.Position = Position;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff
inline struct UPlaneFalloff UPlaneFalloff::SetPlaneFalloff(float Magnitude, float MinRange, float MaxRange, float Default, float Distance, struct FVector Position, struct FVector Normal, enum class EFieldFalloffType Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.PlaneFalloff.SetPlaneFalloff");

	struct SetPlaneFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		float Distance;
		struct FVector Position;
		struct FVector Normal;
		enum class EFieldFalloffType Falloff;
		struct UPlaneFalloff ReturnValue;

	}; SetPlaneFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Distance = Distance;
	Params.Position = Position;
	Params.Normal = Normal;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.BoxFalloff.SetBoxFalloff
inline struct UBoxFalloff UBoxFalloff::SetBoxFalloff(float Magnitude, float MinRange, float MaxRange, float Default, struct FTransform Transform, enum class EFieldFalloffType Falloff) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.BoxFalloff.SetBoxFalloff");

	struct SetBoxFalloff_Params {
		float Magnitude;
		float MinRange;
		float MaxRange;
		float Default;
		struct FTransform Transform;
		enum class EFieldFalloffType Falloff;
		struct UBoxFalloff ReturnValue;

	}; SetBoxFalloff_Params Params;

	Params.Magnitude = Magnitude;
	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Default = Default;
	Params.Transform = Transform;
	Params.Falloff = Falloff;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.NoiseField.SetNoiseField
inline struct UNoiseField UNoiseField::SetNoiseField(float MinRange, float MaxRange, struct FTransform Transform) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.NoiseField.SetNoiseField");

	struct SetNoiseField_Params {
		float MinRange;
		float MaxRange;
		struct FTransform Transform;
		struct UNoiseField ReturnValue;

	}; SetNoiseField_Params Params;

	Params.MinRange = MinRange;
	Params.MaxRange = MaxRange;
	Params.Transform = Transform;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.UniformVector.SetUniformVector
inline struct UUniformVector UUniformVector::SetUniformVector(float Magnitude, struct FVector Direction) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.UniformVector.SetUniformVector");

	struct SetUniformVector_Params {
		float Magnitude;
		struct FVector Direction;
		struct UUniformVector ReturnValue;

	}; SetUniformVector_Params Params;

	Params.Magnitude = Magnitude;
	Params.Direction = Direction;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RadialVector.SetRadialVector
inline struct URadialVector URadialVector::SetRadialVector(float Magnitude, struct FVector Position) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RadialVector.SetRadialVector");

	struct SetRadialVector_Params {
		float Magnitude;
		struct FVector Position;
		struct URadialVector ReturnValue;

	}; SetRadialVector_Params Params;

	Params.Magnitude = Magnitude;
	Params.Position = Position;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.RandomVector.SetRandomVector
inline struct URandomVector URandomVector::SetRandomVector(float Magnitude) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.RandomVector.SetRandomVector");

	struct SetRandomVector_Params {
		float Magnitude;
		struct URandomVector ReturnValue;

	}; SetRandomVector_Params Params;

	Params.Magnitude = Magnitude;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.OperatorField.SetOperatorField
inline struct UOperatorField UOperatorField::SetOperatorField(float Magnitude, struct UFieldNodeBase RightField, struct UFieldNodeBase LeftField, enum class EFieldOperationType Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.OperatorField.SetOperatorField");

	struct SetOperatorField_Params {
		float Magnitude;
		struct UFieldNodeBase RightField;
		struct UFieldNodeBase LeftField;
		enum class EFieldOperationType Operation;
		struct UOperatorField ReturnValue;

	}; SetOperatorField_Params Params;

	Params.Magnitude = Magnitude;
	Params.RightField = RightField;
	Params.LeftField = LeftField;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.ToIntegerField.SetToIntegerField
inline struct UToIntegerField UToIntegerField::SetToIntegerField(struct UFieldNodeFloat FloatField) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToIntegerField.SetToIntegerField");

	struct SetToIntegerField_Params {
		struct UFieldNodeFloat FloatField;
		struct UToIntegerField ReturnValue;

	}; SetToIntegerField_Params Params;

	Params.FloatField = FloatField;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.ToFloatField.SetToFloatField
inline struct UToFloatField UToFloatField::SetToFloatField(struct UFieldNodeInt IntegerField) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.ToFloatField.SetToFloatField");

	struct SetToFloatField_Params {
		struct UFieldNodeInt IntegerField;
		struct UToFloatField ReturnValue;

	}; SetToFloatField_Params Params;

	Params.IntegerField = IntegerField;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

// Function FieldSystemEngine.CullingField.SetCullingField
inline struct UCullingField UCullingField::SetCullingField(struct UFieldNodeBase Culling, struct UFieldNodeBase Field, enum class EFieldCullingOperationType Operation) {
	static auto fn = UObject::FindObject<UFunction>("Function FieldSystemEngine.CullingField.SetCullingField");

	struct SetCullingField_Params {
		struct UFieldNodeBase Culling;
		struct UFieldNodeBase Field;
		enum class EFieldCullingOperationType Operation;
		struct UCullingField ReturnValue;

	}; SetCullingField_Params Params;

	Params.Culling = Culling;
	Params.Field = Field;
	Params.Operation = Operation;

	auto flags = fn->FunctionFlags;
	UObject::ProcessEvent(fn, &Params);
	fn->FunctionFlags = flags;

	return params.ReturnValue;
}

